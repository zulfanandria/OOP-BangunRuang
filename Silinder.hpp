#ifndef SILINDER_HPP
#define SILINDER_HPP

#include "BangunRuang.hpp"

class Silinder: public BangunRuang {
private:
    double tinggi;
    double jariJari;

public:
    Silinder(double t, double r);
    ~Silinder();

    double getArea() const override;
    double getVolume() const override;
    
};

#endif