#ifndef BALOK_HPP
#define BALOK_HPP

#include "BangunRuang.hpp"

class Balok : public BangunRuang {
private:
    double panjang;
    double lebar;
    double tinggi;

public:
    Balok(double p, double l, double t);
    ~Balok();

    double getArea() const override;
    double getVolume() const override;

};

#endif