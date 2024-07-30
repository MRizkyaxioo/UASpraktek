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
    char pilihan;

    cout << "Aplikasi Penghitung Nilai Mahasiswa" << endl;
    do {
    cin.ignore();
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);

    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;

    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;

    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;

    double nilaiAkhir = hitungNilaiAkhir(nilaiTugas, nilaiUTS, nilaiUAS);
    char grade = tentukanGrade(nilaiAkhir);

    cout << "\nNama Mahasiswa: " << nama << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Grade: " << grade << endl;

    cout << "\n Apakah Anda Ingin Memasukkan Nilai Mahasiswa Lain? (y/n): ";
    cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}
