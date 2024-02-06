#ifndef KUBUS_HPP
#define KUBUS_HPP

#include "BangunRuang.hpp"

class Kubus: public BangunRuang {
private:
    double sisi;

public:
    Kubus(double s);
    ~Kubus();

    double getArea() const override;
    double getVolume() const override;

};

#endif