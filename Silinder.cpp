#include "Silinder.hpp"

Silinder::Silinder(double t, double r)
    : BangunRuang(3, 2, "Silinder"), jariJari(r), tinggi(t) {}
Silinder::~Silinder() {}

double Silinder::getArea() const {
    return 2 * 3.14 * jariJari * (jariJari+tinggi);
} 

double Silinder::getVolume() const{
    return 3.14 * jariJari * jariJari * tinggi;
}