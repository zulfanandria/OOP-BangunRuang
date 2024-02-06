#include <iostream>
#include "BangunRuang.hpp"
#include "Kubus.hpp"
#include "Balok.hpp"
#include "Silinder.hpp"
using namespace std;

int main() {
    double sKubus, pBalok, lBalok, tBalok, rSilinder, tSilinder;
    
    cout << "Masukkan spesifikasi bangun ruang yang ingin dihitung" << endl;
    cout << "Panjang sisi kubus : ";
    cin >> sKubus;
    cout << "Panjang balok : ";
    cin >> pBalok;
    cout << "Lebar balok : ";
    cin >> lBalok;
    cout << "Tinggi balok : ";
    cin >> tBalok;
    cout << "Tinggi silinder : ";
    cin >> tSilinder;
    cout << "Jari-jari balok : ";
    cin >> rSilinder;

    Kubus kubus(sKubus);
    Balok balok(pBalok, lBalok, tBalok);
    Silinder silinder(tSilinder, rSilinder);

    cout << "Area Kubus : " << kubus.getArea() << ", Volume Kubus : " << kubus.getVolume() << endl;
    cout << "Area Balok : " << balok.getArea() << ", Volume Balok : " << balok.getVolume() << endl;
    cout << "Area Silinder : " << silinder.getArea() << ", Volume Silinder : " << silinder.getVolume() << endl;
}