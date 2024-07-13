#include <iostream>
using namespace std;


double hitungNilaiAkhir(double nilaiTugas, double nilaiUTS, double nilaiUAS) {
   
    double bobotTugas = 0.3;
    double bobotUTS = 0.3;
    double bobotUAS = 0.4;

    double nilaiAkhir = (nilaiTugas * bobotTugas) + (nilaiUTS * bobotUTS) + (nilaiUAS * bobotUAS);
    return nilaiAkhir;
}