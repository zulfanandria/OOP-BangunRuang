#include <iostream>
#include "BangunRuang.hpp"

BangunRuang::BangunRuang(int sisi, int rusuk, std::string nama)
    : jumlahSisi(sisi), jumlahRusuk(rusuk), namaBangun(nama)
    {}

BangunRuang::~BangunRuang() {}

int BangunRuang::getJumlahSisi() const {
    return jumlahSisi;
}

int BangunRuang::getJumlahRusuk() const {
    return jumlahRusuk;
}

std::string BangunRuang::getNamaBangun() const {
    return namaBangun;
}

    

