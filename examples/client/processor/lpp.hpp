#pragma once
#include <memory>

#include <lpp/message.hpp>
#include <streamline/inspector.hpp>
#include <streamline/system.hpp>

#include "config.hpp"

namespace streamline {
template <>
struct Clone<lpp::Message> {
    lpp::Message operator()(lpp::Message const&) { __builtin_unreachable(); }
};
}  // namespace streamline

class LppXerOutput : public streamline::Inspector<lpp::Message> {
public:
    LppXerOutput(OutputConfig const& output) : mOutput(output) {}

    void inspect(streamline::System&, DataType const& message) NOEXCEPT override;

private:
    OutputConfig const& mOutput;
};

class LppUperOutput : public streamline::Inspector<lpp::Message> {
public:
    LppUperOutput(OutputConfig const& output) : mOutput(output) {}

    void inspect(streamline::System&, DataType const& message) NOEXCEPT override;

private:
    OutputConfig const& mOutput;
};
