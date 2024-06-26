#include "lpp/session.hpp"
#include "lpp.hpp"
#include "lpp/abort.hpp"

#include <scheduler/scheduler.hpp>
#include <scheduler/task.hpp>
#include <supl/end.hpp>
#include <supl/pos.hpp>
#include <supl/posinit.hpp>
#include <supl/response.hpp>
#include <supl/session.hpp>
#include <supl/start.hpp>

#include "LPP-Message.h"

#define LOGLET_CURRENT_MODULE "lpp/s"

namespace lpp {

SessionTask::SessionTask(Session* session, int fd)
    : mFd(fd), mSession(session), mReadEnabled(false), mWriteEnabled(false), mErrorEnabled(false),
      mRegistered(false) {
    mEvent = {[this](struct epoll_event* event) {
        this->event(event);
    }};
}

void SessionTask::register_task(Scheduler* scheduler) {
    Task::register_task(scheduler);

    if (!mRegistered) {
        auto events = 0;
        if (mReadEnabled) events |= EPOLLIN;
        if (mWriteEnabled) events |= EPOLLOUT;
        if (mErrorEnabled) events |= EPOLLERR;
        if (mScheduler->add_epoll_fd(mFd, events, &mEvent)) {
            mRegistered = true;
        }
    }
}

void SessionTask::unregister_task(Scheduler* scheduler) {
    if (mRegistered) {
        mScheduler->remove_epoll_fd(mFd);
        mRegistered = false;
    }
    Task::unregister_task(scheduler);
}

void SessionTask::update(int fd, bool read, bool write, bool error) {
    mFd = fd;
    if (mReadEnabled != read || mWriteEnabled != write || mErrorEnabled != error) {
        mReadEnabled  = read;
        mWriteEnabled = write;
        mErrorEnabled = error;
    }
}

void SessionTask::event(struct epoll_event* event) {
    if (mRegistered) {
        mScheduler->cancel(this);
    }

    if (mSession) {
        // NOTE: There are cases when we would get all three events at the same time. In that case,
        // it is not possible right now to handle them all, and doing them one by one will not work
        // as the state will change in between. So, we will just handle the first event.
        if (event->events & EPOLLIN)
            mSession->process_read();
        else if (event->events & EPOLLOUT)
            mSession->process_write();
        else if (event->events & EPOLLERR)
            mSession->process_error();
    }
}

Session::Session(Version version, supl::Identity identity)
    : mState(State::UNKNOWN), mVersion(version), mIdentity(identity), mSession(nullptr),
      mTransactionId(1), mGenerationId(1), mSequenceNumber(0), mScheduler(nullptr), mTask(this, -1),
      mNextReadState(State::UNKNOWN), mNextWriteState(State::UNKNOWN),
      mNextErrorState(State::UNKNOWN) {
    SCOPE_FUNCTION();
}

Session::~Session() {
    SCOPE_FUNCTION();
    if (mScheduler) {
        mScheduler->cancel(&mTask);
    }
    if (mSession) {
        delete mSession;
    }
}

static const char* state_to_string(State state) {
    switch (state) {
    case State::UNKNOWN: return "UNKNOWN";
    case State::CONNECT: return "CONNECT";
    case State::CONNECTING: return "CONNECTING";
    case State::CONNECTED: return "CONNECTED";
    case State::CONNECTION_FAILED: return "CONNECTION_FAILED";
    case State::DISCONNECTED: return "DISCONNECTED";
    case State::SUPL_HANDSHAKE_SEND: return "SUPL_HANDSHAKE_SEND";
    case State::SUPL_HANDSHAKE_RECV: return "SUPL_HANDSHAKE_RECV";
    case State::SUPL_POSINIT: return "SUPL_POSINIT";
    case State::ESTABLISHED: return "ESTABLISHED";
    case State::MESSAGE: return "MESSAGE";
    case State::ERROR: return "ERROR";
    case State::EXIT: return "EXIT";
    default: return "INVALID";
    }
}

void Session::connect(const std::string& host, uint16_t port) {
    SCOPE_FUNCTIONF("%s, %d", host.c_str(), port);

    if (mState != State::UNKNOWN) {
        ERRORF("invalid state: %s", state_to_string(mState));
        return;
    }

    mConnectionHost = host;
    mConnectionPort = port;
    switch_state(State::CONNECT);
}

void Session::switch_state(State state) {
    SCOPE_FUNCTIONF("%s -> %s", state_to_string(mState), state_to_string(state));
    mState = state;
}

void Session::process() {
    for (;;) {
        SCOPE_FUNCTIONF("%s", state_to_string(mState));

        if (mState == State::EXIT) {
            return;
        }

        NextState result{};
        switch (mState) {
        case State::UNKNOWN: result = state_unknown(); break;
        case State::CONNECT: result = state_connect(); break;
        case State::CONNECTING: result = state_connecting(); break;
        case State::CONNECTION_FAILED: result = state_connection_failed(); break;
        case State::CONNECTED: result = state_connected(); break;
        case State::DISCONNECTED: result = state_disconnected(); break;
        case State::ERROR: result = state_error(); break;
        case State::SUPL_HANDSHAKE_SEND: result = state_handshake_send(); break;
        case State::SUPL_HANDSHAKE_RECV: result = state_handshake_recv(); break;
        case State::SUPL_POSINIT: result = state_posinit(); break;
        case State::ESTABLISHED: result = state_established(); break;
        case State::MESSAGE: result = state_message(); break;
        default: ERRORF("invalid state: %s", state_to_string(mState)); SUPL_UNREACHABLE();
        }

        if (!result.schedule) {
            VERBOSEF("next: state: %s", state_to_string(result.next_state));
            switch_state(result.next_state);
        } else {
            VERBOSEF("next: read: %s, write: %s, error: %s", state_to_string(result.read_state),
                     state_to_string(result.write_state), state_to_string(result.error_state));
            if (!mSession || !mScheduler || mSession->fd() < 0 || mSession->is_disconnected()) {
                ERRORF("invalid supl session");
                switch_state(State::DISCONNECTED);
                return;
            }

            mNextReadState  = result.read_state;
            mNextWriteState = result.write_state;
            mNextErrorState = result.error_state;
            mTask.update(mSession->fd(), result.read_state != State::UNKNOWN,
                         result.write_state != State::UNKNOWN,
                         result.error_state != State::UNKNOWN);
            mScheduler->schedule(&mTask);
            return;
        }
    }
}

void Session::process_read() {
    SCOPE_FUNCTION();
    switch_state(mNextReadState);
    process();
}

void Session::process_write() {
    SCOPE_FUNCTION();
    switch_state(mNextWriteState);
    process();
}

void Session::process_error() {
    SCOPE_FUNCTION();
    switch_state(mNextErrorState);
    process();
}

NextState Session::state_unknown() {
    SCOPE_FUNCTION();
    SUPL_UNREACHABLE();
    return NextState::make().next(State::DISCONNECTED);
}

NextState Session::state_connect() {
    SCOPE_FUNCTION();

    if (mSession) {
        return NextState::make().next(State::DISCONNECTED);
    }

    mSession = new supl::Session(supl::VERSION_2_0, mIdentity);
    if (!mSession->connect(mConnectionHost, mConnectionPort)) {
        ERRORF("failed to connect to %s:%d", mConnectionHost.c_str(), mConnectionPort);
        return NextState::make().next(State::DISCONNECTED);
    }

    return NextState::make().read(State::CONNECTING).write(State::CONNECTING).error(State::ERROR);
}

NextState Session::state_connecting() {
    SCOPE_FUNCTION();

    if (!mSession->handle_connection()) {
        ERRORF("failed to establish connection to %s:%d", mConnectionHost.c_str(), mConnectionPort);
        return NextState::make().next(State::CONNECTION_FAILED);
    }

    return NextState::make().next(State::CONNECTED);
}

NextState Session::state_connection_failed() {
    SCOPE_FUNCTION();
    return NextState::make().next(State::DISCONNECTED);
}

NextState Session::state_disconnected() {
    SCOPE_FUNCTION();
    // TODO: Reconnect
    return NextState::make().next(State::EXIT);
}

NextState Session::state_error() {
    SCOPE_FUNCTION();
    return NextState::make().next(State::DISCONNECTED);
}

NextState Session::state_connected() {
    SCOPE_FUNCTION();
    return NextState::make().next(State::SUPL_HANDSHAKE_SEND);
}

NextState Session::state_handshake_send() {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

    auto cell         = supl::Cell::lte(240, 1, 1, 0);
    auto capabilities = supl::SETCapabilities{
        .posTechnology = {},
        .prefMethod    = supl::PrefMethod::noPreference,
        .posProtocol   = {.lpp = {.enabled               = true,
                                  .majorVersionField     = mVersion.major,
                                  .technicalVersionField = mVersion.technical,
                                  .editorialVersionField = mVersion.editorial}}};

    auto start = supl::START{
        .sETCapabilities = capabilities,
        .applicationID   = {.name     = "SUPL Example Client",
                            .provider = "Application-Provider",
                            .version  = "1.0.0.0"},
        .locationID      = {cell},
    };

    if (!mSession->handshake(start)) {
        ERRORF("failed to establish SUPL handshake");
        return NextState{State::DISCONNECTED};
    }

    return NextState::make().read(State::SUPL_HANDSHAKE_RECV).error(State::DISCONNECTED);
}

NextState Session::state_handshake_recv() {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

    auto result = mSession->handle_handshake();
    if (result == supl::Session::Handshake::NO_DATA) {
        return NextState::make().read(State::SUPL_HANDSHAKE_RECV).error(State::DISCONNECTED);
    } else if (result == supl::Session::Handshake::ERROR) {
        return NextState::make().error(State::DISCONNECTED);
    }

    return NextState::make().next(State::SUPL_POSINIT);
}

NextState Session::state_posinit() {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

    auto cell         = supl::Cell::lte(240, 1, 1, 0);
    auto capabilities = supl::SETCapabilities{
        .posTechnology = {},
        .prefMethod    = supl::PrefMethod::noPreference,
        .posProtocol   = {.lpp = {.enabled               = true,
                                  .majorVersionField     = mVersion.major,
                                  .technicalVersionField = mVersion.technical,
                                  .editorialVersionField = mVersion.editorial}}};

    auto posinit = supl::POSINIT{
        .sETCapabilities = capabilities,
        .locationID      = {cell},
    };
    if (!mSession->send(posinit)) {
        ERRORF("failed to send SUPL POSINIT");
        return NextState{State::DISCONNECTED};
    }

    return NextState::make().next(State::ESTABLISHED);
}

NextState Session::state_established() {
    SCOPE_FUNCTION();

    if (on_established) {
        on_established(*this);
    }

    return NextState::make().read(State::MESSAGE).error(State::DISCONNECTED);
}

NextState Session::state_message() {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

    mSession->fill_receive_buffer();

    for (;;) {
        supl::END end{};
        supl::POS pos{};
        auto      received = mSession->try_receive(nullptr, &end, &pos);
        if (received == supl::Session::Received::NO_DATA) {
            return NextState::make().read(State::MESSAGE).error(State::DISCONNECTED);
        } else if (received == supl::Session::Received::END) {
            return NextState::make().next(State::DISCONNECTED);
        } else if (received == supl::Session::Received::POS) {
            process_supl_pos(pos);
            continue;
        } else {
            WARNF("problem receiving SUPL message");
            continue;
        }
    }
}

void Session::schedule(Scheduler* scheduler) {
    SCOPE_FUNCTION();
    LPP_ASSERT(scheduler != nullptr, "scheduler is null");

    mScheduler = scheduler;
    process();
}

TransactionHandle Session::create_transaction(bool single_side_endable) {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

    auto transaction = allocate_transaction();
    if (!transaction.is_valid()) {
        ERRORF("failed to allocate transaction id");
        return TransactionHandle::invalid();
    }

    if (!add_transaction(transaction, single_side_endable)) {
        ERRORF("failed to add transaction");
        return TransactionHandle::invalid();
    }

    return transaction;
}

void Session::delete_transaction(const TransactionHandle& transaction) {
    SCOPE_FUNCTION();
    client_end_transaction(transaction);
}

bool Session::add_transaction(const TransactionHandle& transaction, bool single_side_endable) {
    SCOPE_FUNCTIONF("%s,sse=%s", transaction.to_string().c_str(),
                    single_side_endable ? "true" : "false");
    LPP_ASSERT(mSession != nullptr, "session is null");

    if (transaction.id() < 0 || transaction.id() > 255) {
        ERRORF("invalid transaction id");
        return false;
    }

    if (mTransactions.find(transaction) != mTransactions.end()) {
        ERRORF("transaction already exists");
        return false;
    }

    TransactionData data{};
    data.handle                 = transaction;
    data.client_should_send_end = false;
    data.client_has_sent_end    = false;
    data.server_has_sent_end    = false;
    data.single_side_endable    = single_side_endable;

    DEBUGF("new transaction %s", transaction.to_string().c_str());
    mTransacionLookup[transaction.lookup()] = transaction;
    mTransactions[transaction]              = data;

    if (on_begin_transaction) {
        on_begin_transaction(*this, transaction);
    }

    return true;
}

bool Session::remove_transaction(const TransactionHandle& transaction) {
    SCOPE_FUNCTIONF("%s", transaction.to_string().c_str());

    auto it = mTransactions.find(transaction);
    if (it == mTransactions.end()) {
        ERRORF("transaction %s not found", transaction.to_string().c_str());
        return false;
    }

    auto ended_by_both    = it->second.client_has_sent_end && it->second.client_has_sent_end;
    auto ended_by_someone = it->second.client_has_sent_end || it->second.server_has_sent_end;
    if (ended_by_both || (it->second.single_side_endable && ended_by_someone)) {
        if (on_end_transaction) {
            on_end_transaction(*this, transaction);
        }

        DEBUGF("del transaction %s", transaction.to_string().c_str());
        mTransacionLookup.erase(transaction.lookup());
        mTransactions.erase(transaction);

        if (transaction.initiator() == Initiator::TargetDevice) {
            mClientTransactions.erase(transaction.id());
        }
        return true;
    }

    return false;
}

void Session::server_end_transaction(const TransactionHandle& transaction) {
    SCOPE_FUNCTIONF("%s", transaction.to_string().c_str());

    auto it = mTransactions.find(transaction);
    if (it == mTransactions.end()) {
        ERRORF("transaction %s not found", transaction.to_string().c_str());
        return;
    }

    if (it->second.server_has_sent_end) {
        WARNF("server ending same transaction multiple times");
    }

    it->second.server_has_sent_end = true;
    if (it->second.single_side_endable) {
        if (on_server_end_transaction) {
            on_server_end_transaction(*this, transaction);
        }
    }

    remove_transaction(transaction);
}

void Session::client_end_transaction(const TransactionHandle& transaction) {
    SCOPE_FUNCTIONF("%s", transaction.to_string().c_str());

    auto it = mTransactions.find(transaction);
    if (it == mTransactions.end()) {
        ERRORF("transaction %s not found", transaction.to_string().c_str());
        return;
    }

    if (it->second.client_has_sent_end) {
        WARNF("client ending same transaction multiple times");
    }

    it->second.client_has_sent_end = true;
    remove_transaction(transaction);
}

TransactionHandle Session::allocate_transaction() {
    SCOPE_FUNCTION();

    auto generation_id = mGenerationId;
    for (long i = 0; i < 255; i++) {
        auto id = (mTransactionId + i) % 256;
        if (mClientTransactions.find(id) == mClientTransactions.end()) {
            mTransactionId = (id + 1) % 256;
            mGenerationId += 1;
            auto transaction = TransactionHandle{this, id, generation_id, Initiator::TargetDevice};
            DEBUGF("alloc transaction %s", transaction.to_string().c_str());
            return transaction;
        }
    }

    return TransactionHandle::invalid();
}

void Session::send(const TransactionHandle& handle, Message& message) {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

    // Ensure that the message doesn't already have a transactionID set and that endTransaction
    // is false
    if (message->transactionID) {
        WARNF("'transactionID' already set");
        return;
    } else if (message->endTransaction) {
        WARNF("'endTransaction' already set");
        return;
    } else if (message->sequenceNumber) {
        WARNF("'sequenceNumber' already set");
        return;
    }

    auto transaction = find_transaction(handle);
    if (!transaction) {
        WARNF("transaction %s not found", handle.to_string().c_str());
        return;
    }

    if (transaction->client_has_sent_end) {
        WARNF("trying to send message using ended transaction %s", handle.to_string().c_str());
        return;
    }

    // Set the transactionID and endTransaction fields
    auto transaction_id               = (LPP_TransactionID*)calloc(1, sizeof(LPP_TransactionID));
    transaction_id->initiator         = handle.initiator() == Initiator::TargetDevice ?
                                            Initiator_targetDevice :
                                            Initiator_locationServer;
    transaction_id->transactionNumber = handle.id();
    message->transactionID            = transaction_id;
    message->endTransaction           = transaction->client_should_send_end;
    message->sequenceNumber           = (SequenceNumber_t*)calloc(1, sizeof(SequenceNumber_t));
    *message->sequenceNumber          = (mSequenceNumber % 255);
    mSequenceNumber += 1;

    auto lpp_message = encode_lpp_message(message);
    if (lpp_message.size() <= 0) {
        ERRORF("failed to encode LPP message");
        return;
    }

    auto pos = supl::POS{
        .payloads =
            {
                supl::Payload{.type = supl::Payload::Type::LPP, .data = lpp_message},
            },
    };

    if (!mSession->send(pos)) {
        ERRORF("failed to send SUPL POS");
        return;
    }

    if (transaction->client_should_send_end) {
        transaction->client_should_send_end = false;
        client_end_transaction(handle);
    }
}

void Session::send_with_end(const TransactionHandle& handle, Message& message) {
    SCOPE_FUNCTION();

    auto transaction = find_transaction(handle);
    if (!transaction) return;

    transaction->client_should_send_end = true;
    send(handle, message);
}

void Session::abort(const TransactionHandle& handle) {
    SCOPE_FUNCTION();

    auto message = create_abort();
    send_with_end(handle, message);
}

void Session::process_supl_pos(const supl::POS& pos) {
    SCOPE_FUNCTION();

    for (const auto& payload : pos.payloads) {
        switch (payload.type) {
        case supl::Payload::Type::LPP:
            DEBUGF("lpp payload: %d bytes", payload.data.size());
            process_lpp_payload(payload);
            break;
        default: WARNF("unsupport payload type"); break;
        }
    }
}

void Session::process_lpp_payload(const supl::Payload& payload) {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");
    LPP_ASSERT(payload.type == supl::Payload::Type::LPP, "invalid payload type");

    auto message = decode_lpp_message(payload.data.data(), payload.data.size());
    if (!message) {
        WARNF("failed to decode LPP message");
        return;
    }

    if (!message->transactionID) {
        WARNF("missing transaction id");
        return;
    } else if (!message->lpp_MessageBody) {
        WARNF("missing message body");
        return;
    }

    auto server_ended_transaction = message->endTransaction;
    auto transaction_ptr          = find_transaction(*message->transactionID);
    if (!transaction_ptr) {
        if (message->transactionID->initiator == Initiator_targetDevice) {
            WARNF("transaction not found: %ld", message->transactionID->transactionNumber);
            // TODO: Send a endTransaction message to the server
            return;
        } else {
            auto handle = TransactionHandle{this, message->transactionID->transactionNumber,
                                            mGenerationId, Initiator::LocationServer};
            mGenerationId += 1;

            // TODO(ewasjon): How should we handle server created transactions?
            add_transaction(handle, true);

            transaction_ptr = find_transaction(*message->transactionID);
            if (!transaction_ptr) {
                ERRORF("failed to add transaction");
                return;
            }
        }
    }

    auto& transaction = *transaction_ptr;
    auto  handle      = transaction.handle;
    if (on_message) {
        on_message(*this, handle, std::move(message));
    }

    // We cannot access 'transaction' here as it may have been delete by the on_message
    // callback.
    if (server_ended_transaction) {
        server_end_transaction(handle);
    }
}

TransactionData* Session::find_transaction(const LPP_TransactionID& transaction_id) {
    SCOPE_FUNCTION();

    auto id        = transaction_id.transactionNumber;
    auto initiator = transaction_id.initiator == Initiator_targetDevice ? Initiator::TargetDevice :
                                                                          Initiator::LocationServer;
    auto lookup    = TransactionLookup{id, initiator};
    auto it        = mTransacionLookup.find(lookup);
    return it != mTransacionLookup.end() ? find_transaction(it->second) : nullptr;
}

TransactionData* Session::find_transaction(const TransactionHandle& handle) {
    SCOPE_FUNCTION();

    auto it = mTransactions.find(handle);
    if (it == mTransactions.end()) {
        return nullptr;
    } else {
        return &it->second;
    }
}

Message Session::decode_lpp_message(const uint8_t* data, size_t size) {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

    // NOTE: Increase default max stack size to handle large messages.
    // TODO(ewasjon): Is this correct?
    asn_codec_ctx_t stack_ctx{};
    stack_ctx.max_stack_size = 1024 * 1024 * 4;

    auto message = (LPP_Message*)nullptr;
    auto result =
        uper_decode_complete(&stack_ctx, &asn_DEF_LPP_Message, (void**)&message, data, size);
    if (result.code == RC_FAIL) {
        WARNF("failed to decode uper: %zd bytes consumed", result.consumed);
        ASN_STRUCT_FREE(asn_DEF_LPP_Message, message);
        return nullptr;
    } else if (result.code == RC_WMORE) {
        WARNF("failed to decode uper: need more data");
        ASN_STRUCT_FREE(asn_DEF_LPP_Message, message);
        return nullptr;
    } else {
        return Message{message};
    }
}

std::vector<uint8_t> Session::encode_lpp_message(const Message& message) {
    SCOPE_FUNCTION();
    LPP_ASSERT(mSession != nullptr, "session is null");

#if 0
    xer_fprint(stdout, &asn_DEF_LPP_Message, message.get());
#endif

    std::vector<uint8_t> buffer;
    buffer.resize(1024 * 16);

    auto result = uper_encode_to_buffer(&asn_DEF_LPP_Message, nullptr, message.get(),
                                        (void*)buffer.data(), buffer.size());
    if (result.encoded == -1) {
        WARNF("failed to encode uper: %s",
              result.failed_type ? result.failed_type->name : "<unknown>");
        return {};
    }

    auto pdu_len = (result.encoded + 7) >> 3;
    buffer.resize(pdu_len);
    return buffer;
}

}  // namespace lpp
