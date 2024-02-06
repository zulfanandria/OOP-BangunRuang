#include "Balok.hpp"

Balok::Balok(double p, double l, double t)
    : BangunRuang(6, 12, "Balok"), panjang(p), lebar(l), tinggi(t) {}
Balok::~Balok() {}

double Balok::getArea() const{
    return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}

double Balok::getVolume() const{
    return panjang * lebar * tinggi;
}