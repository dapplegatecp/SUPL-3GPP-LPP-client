#pragma once

#if !defined(INCLUDE_GENERATOR_RTCM)
#error "INCLUDE_GENERATOR_RTCM must be defined"
#endif

#include <generator/rtcm/generator.hpp>

#include "config.hpp"
#include "lpp.hpp"

class Lpp2Rtcm : public streamline::Inspector<lpp::Message> {
public:
    Lpp2Rtcm(OutputConfig const& output, Lpp2RtcmConfig const& config);
    ~Lpp2Rtcm() override;

    void inspect(streamline::System&, DataType const& message) override;

private:
    std::unique_ptr<generator::rtcm::Generator> mGenerator;
    generator::rtcm::MessageFilter              mFilter;

    OutputConfig const&   mOutput;
    Lpp2RtcmConfig const& mConfig;
};
