#include <cstdint>

namespace length_conversion {
    constexpr double INCH_TO_METER = 0.0254;
    constexpr double FOOT_TO_METER = 0.3048;
    
    constexpr double feet_to_meters(double feet) {
        return feet * FOOT_TO_METER;
    }
    
    constexpr double inches_to_meters(double inches) {
        return inches * INCH_TO_METER;
    }
    
    constexpr double meters_to_feet(double meters) {
        return meters / FOOT_TO_METER;
    }
    
    constexpr double meters_to_inches(double meters) {
        return meters / INCH_TO_METER;
    }
}

using namespace length_conversion;


constexpr double operator"" _ft_to_in(long double feet) {
    return static_cast<double>(feet * 12.0);
}

constexpr double operator"" _ft_to_cm(long double feet) {
    return static_cast<double>(feet_to_meters(feet) * 100.0);
}

constexpr double operator"" _ft_to_m(long double feet) {
    return static_cast<double>(feet_to_meters(feet));
}


constexpr double operator"" _in_to_ft(long double inches) {
    return static_cast<double>(inches / 12.0);
}

constexpr double operator"" _in_to_cm(long double inches) {
    return static_cast<double>(inches_to_meters(inches) * 100.0);
}

constexpr double operator"" _in_to_m(long double inches) {
    return static_cast<double>(inches_to_meters(inches));
}

  
constexpr double operator"" _cm_to_ft(long double cm) {
    return static_cast<double>(meters_to_feet(cm / 100.0));
}

constexpr double operator"" _cm_to_in(long double cm) {
    return static_cast<double>(meters_to_inches(cm / 100.0));
}

constexpr double operator"" _cm_to_m(long double cm) {
    return static_cast<double>(cm / 100.0);
}


constexpr double operator"" _m_to_ft(long double meters) {
    return static_cast<double>(meters_to_feet(meters));
}

constexpr double operator"" _m_to_in(long double meters) {
    return static_cast<double>(meters_to_inches(meters));
}

constexpr double operator"" _m_to_cm(long double meters) {
    return static_cast<double>(meters * 100.0);
}

