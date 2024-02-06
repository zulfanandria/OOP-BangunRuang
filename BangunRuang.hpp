#ifndef BANGUNRUANG_HPP
#define BANGUNRUANG_HPP

#include <iostream>
#include <string>

class BangunRuang{
private:
    int jumlahSisi;
    int jumlahRusuk;
    std::string namaBangun;

public:
    BangunRuang(int sisi, int rusuk, std::string nama);
    virtual ~BangunRuang();

    int getJumlahSisi() const ;
    int getJumlahRusuk() const ;
    std::string getNamaBangun() const ;

    virtual double getArea() const =0;
    virtual double getVolume() const =0;
};

#endif

