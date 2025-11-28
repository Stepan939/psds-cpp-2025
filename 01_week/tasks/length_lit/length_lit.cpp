#include <cstdint>


constexpr double INCH_TO_METER = 0.0254;
constexpr double FOOT_TO_METER = 0.3048;


constexpr double operator"" _ft_to_in(long double feet) {
    return static_cast<double>(feet * 12.0);
}

constexpr double operator"" _ft_to_cm(long double feet) {
    return static_cast<double>(feet * FOOT_TO_METER * 100.0);
}

constexpr double operator"" _ft_to_m(long double feet) {
    return static_cast<double>(feet * FOOT_TO_METER);
}

constexpr double operator"" _in_to_ft(long double inches) {
    return static_cast<double>(inches / 12.0);
}

constexpr double operator"" _in_to_cm(long double inches) {
    return static_cast<double>(inches * INCH_TO_METER * 100.0);
}

constexpr double operator"" _in_to_m(long double inches) {
    return static_cast<double>(inches * INCH_TO_METER);
}

constexpr double operator"" _cm_to_ft(long double centimeters) {
    return static_cast<double>(centimeters / 100.0 / FOOT_TO_METER);
}

constexpr double operator"" _cm_to_in(long double centimeters) {
    return static_cast<double>(centimeters / 100.0 / INCH_TO_METER);
}

constexpr double operator"" _cm_to_m(long double centimeters) {
    return static_cast<double>(centimeters / 100.0);
}

constexpr double operator"" _m_to_ft(long double meters) {
    return static_cast<double>(meters / FOOT_TO_METER);
}

constexpr double operator"" _m_to_in(long double meters) {
    return static_cast<double>(meters / INCH_TO_METER);
}

constexpr double operator"" _m_to_cm(long double meters) {
    return static_cast<double>(meters * 100.0);
}
