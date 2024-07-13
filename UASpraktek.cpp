#include <iostream>
using namespace std;


double hitungNilaiAkhir(double nilaiTugas, double nilaiUTS, double nilaiUAS) {
   
    double bobotTugas = 0.3;
    double bobotUTS = 0.3;
    double bobotUAS = 0.4;

    double nilaiAkhir = (nilaiTugas * bobotTugas) + (nilaiUTS * bobotUTS) + (nilaiUAS * bobotUAS);
    return nilaiAkhir;
}


char tentukanGrade(double nilaiAkhir) {
    if (nilaiAkhir >= 85) {
        return 'A';
    } else if (nilaiAkhir >= 70) {
        return 'B';
    } else if (nilaiAkhir >= 55) {
        return 'C';
    } else if (nilaiAkhir >= 40) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    string nama;
    double nilaiTugas, nilaiUTS, nilaiUAS;

    cout << "Aplikasi Penghitung Nilai Mahasiswa" << endl;
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);
