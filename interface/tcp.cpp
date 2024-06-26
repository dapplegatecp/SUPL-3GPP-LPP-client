#include "tcp.hpp"
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdexcept>
#include <sys/socket.h>
#include <unistd.h>

#ifdef INTERFACE_SOCKET_DEBUG
#include <cstdio>
#define SOCKET_DEBUG(...) printf(__VA_ARGS__)
#else
#define SOCKET_DEBUG(...)
#endif

namespace interface {

TcpInterface::TcpInterface(std::string host, uint16_t port, bool reconnect) IF_NOEXCEPT
    : mHost(std::move(host)),
      mPort(port),
      mReconnect(reconnect) {}

TcpInterface::~TcpInterface() IF_NOEXCEPT {
    close();
}

void TcpInterface::open() {
    if (mSocket.is_open()) {
        return;
    }

    struct addrinfo hints {};
    hints.ai_family   = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;

    auto service = std::to_string(mPort);

    struct addrinfo* result;
    auto             error = getaddrinfo(mHost.c_str(), service.c_str(), &hints, &result);
    if (error != 0) {
        SOCKET_DEBUG("TCP: failed to getaddrinfo %s:%u\n", mHost.c_str(), mPort);
        return;
    }

    for (auto* rp = result; rp != nullptr; rp = rp->ai_next) {
        auto address = NetworkAddress::from_addrinfo(rp);
        mSocket      = ReconnectableSocket::connect(address, mReconnect);
        if (mSocket.is_open()) {
            freeaddrinfo(result);
            return;
        }
    }

    freeaddrinfo(result);
    SOCKET_DEBUG("TCP: failed to connect %s:%u\n", mHost.c_str(), mPort);
}

void TcpInterface::close() {
    mSocket.close();
}

size_t TcpInterface::read(void* data, size_t const size) {
    return mSocket.read(data, size);
}

size_t TcpInterface::write(void const* data, size_t const size) {
    return mSocket.write(data, size);
}

bool TcpInterface::can_read() IF_NOEXCEPT {
    return mSocket.can_read();
}

bool TcpInterface::can_write() IF_NOEXCEPT {
    return mSocket.can_write();
}

void TcpInterface::wait_for_read() IF_NOEXCEPT {
    mSocket.wait_for_read();
}

void TcpInterface::wait_for_write() IF_NOEXCEPT {
    mSocket.wait_for_write();
}

bool TcpInterface::is_open() IF_NOEXCEPT {
    return mSocket.is_open();
}

void TcpInterface::print_info() IF_NOEXCEPT {
    printf("[interface]\n");
    printf("  type:       tcp\n");
    printf("  host:       %s\n", mHost.c_str());
    printf("  port:       %u\n", mPort);
    printf("  reconnect:  %s\n", mReconnect ? "true" : "false");
    mSocket.print_info();
}

//
//
//

Interface* Interface::tcp(std::string host, uint16_t port, bool reconnect) {
    return new TcpInterface(std::move(host), port, reconnect);
}

}  // namespace interface
