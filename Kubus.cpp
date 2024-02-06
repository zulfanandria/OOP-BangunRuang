#include "Kubus.hpp"

Kubus::Kubus(double s) 
    : BangunRuang(6, 12, "Kubus"), sisi(s) {}
Kubus::~Kubus() {}

double Kubus::getArea() const {
    return 6 * sisi * sisi;
}

double Kubus::getVolume() const {
    return sisi * sisi * sisi;
}