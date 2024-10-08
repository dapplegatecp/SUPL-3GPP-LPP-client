#pragma once
#include <generator/rtcm/maybe.hpp>

#include <string>

class SignalId {
public:
    SignalId() = default;

    enum Gnss {
        UNKNOWN,
        GPS,
        GLONASS,
        GALILEO,
        BEIDOU,
    };

    NODISCARD static SignalId from_lpp(Gnss gnss, long id);

    //
    //
    //

    NODISCARD Gnss gnss() const { return mGnss; }
    NODISCARD Maybe<long> as_msm() const;
    NODISCARD long        lpp_id() const;
    NODISCARD std::string to_string() const;
    NODISCARD const char* name() const;
    NODISCARD double      frequency() const;
    NODISCARD double      wavelength() const;

    inline bool operator==(SignalId const& other) const {
        return mGnss == other.mGnss && mLppId == other.mLppId;
    }

    inline bool operator!=(SignalId const& other) const { return !(*this == other); }

private:
    explicit SignalId(Gnss gnss, int32_t lpp_id) : mGnss(gnss), mLppId(lpp_id) {}

    Gnss    mGnss  = Gnss::UNKNOWN;
    int32_t mLppId = -1;

public:
    static SignalId const GPS_L1_CA;
    static SignalId const GPS_L1C;
    static SignalId const GPS_L2C;
    static SignalId const GPS_L5;
    static SignalId const GPS_L1_P;
    static SignalId const GPS_L1_Z_TRACKING;
    static SignalId const GPS_L2_C_A;
    static SignalId const GPS_L2_P;
    static SignalId const GPS_L2_Z_TRACKING;
    static SignalId const GPS_L2_L2C_M;
    static SignalId const GPS_L2_L2C_L;
    static SignalId const GPS_L2_L2C_M_L;
    static SignalId const GPS_L5_I;
    static SignalId const GPS_L5_Q;
    static SignalId const GPS_L5_I_Q;
    static SignalId const GPS_L1_L1C_D;
    static SignalId const GPS_L1_L1C_P;
    static SignalId const GPS_L1_L1C_D_P;

    static SignalId const GALILEO_E1;
    static SignalId const GALILEO_E5A;
    static SignalId const GALILEO_E5B;
    static SignalId const GALILEO_E6;
    static SignalId const GALILEO_E5A_E5B;
    static SignalId const GALILEO_E1_C_NO_DATA;
    static SignalId const GALILEO_E1_A;
    static SignalId const GALILEO_E1_B_I_NAV_OS_CS_SOL;
    static SignalId const GALILEO_E1_B_C;
    static SignalId const GALILEO_E1_A_B_C;
    static SignalId const GALILEO_E6_C;
    static SignalId const GALILEO_E6_A;
    static SignalId const GALILEO_E6_B;
    static SignalId const GALILEO_E6_B_C;
    static SignalId const GALILEO_E6_A_B_C;
    static SignalId const GALILEO_E5B_I;
    static SignalId const GALILEO_E5B_Q;
    static SignalId const GALILEO_E5B_I_Q;
    static SignalId const GALILEO_E5_A_B_I;
    static SignalId const GALILEO_E5_A_B_Q;
    static SignalId const GALILEO_E5_A_B_I_Q;
    static SignalId const GALILEO_E5A_I;
    static SignalId const GALILEO_E5A_Q;
    static SignalId const GALILEO_E5A_I_Q;
};

namespace std {
template <>
struct hash<SignalId> {
    std::size_t operator()(SignalId const& k) const NOEXCEPT {
        auto hash_gnss   = std::hash<int>()(static_cast<int>(k.gnss()));
        auto hash_lpp_id = std::hash<long>()(k.lpp_id());
        return hash_gnss ^ hash_lpp_id;
    }
};
}  // namespace std
