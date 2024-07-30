#include <iostream>
using namespace std;

// Definisikan struct untuk mengelompokkan data mahasiswa
struct Mahasiswa {
    string nama;
    double nilaiTugas;
    double nilaiUTS;
    double nilaiUAS;
};

// Fungsi untuk menghitung nilai akhir
double hitungNilaiAkhir(double nilaiTugas, double nilaiUTS, double nilaiUAS) {
    double bobotTugas = 0.3;
    double bobotUTS = 0.3;
    double bobotUAS = 0.4;
    double nilaiAkhir = (nilaiTugas * bobotTugas) + (nilaiUTS * bobotUTS) + (nilaiUAS * bobotUAS);
    return nilaiAkhir;
}

// Fungsi untuk menentukan grade
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
    const int maxMahasiswa = 100;
    Mahasiswa mahasiswa[maxMahasiswa];
    int jumlahMahasiswa = 0;
    char pilihan;

    cout << "Aplikasi Penghitung Nilai Mahasiswa" << endl;
    do {
        cin.ignore(); // Menunggu input enter sebelumnya
        cout << "Masukkan nama mahasiswa: ";
        getline(cin, mahasiswa[jumlahMahasiswa].nama);

        cout << "Masukkan nilai tugas: ";
        cin >> mahasiswa[jumlahMahasiswa].nilaiTugas;
        cout << "Masukkan nilai UTS: ";
        cin >> mahasiswa[jumlahMahasiswa].nilaiUTS;
        cout << "Masukkan nilai UAS: ";
        cin >> mahasiswa[jumlahMahasiswa].nilaiUAS;

        double nilaiAkhir = hitungNilaiAkhir(mahasiswa[jumlahMahasiswa].nilaiTugas, mahasiswa[jumlahMahasiswa].nilaiUTS, mahasiswa[jumlahMahasiswa].nilaiUAS);
        char grade = tentukanGrade(nilaiAkhir);

        cout << "\nNama Mahasiswa: " << mahasiswa[jumlahMahasiswa].nama << endl;
        cout << "Nilai Akhir: " << nilaiAkhir << endl;
        cout << "Grade: " << grade << endl;

        jumlahMahasiswa++;

        cout << "\nApakah Anda Ingin Memasukkan Nilai Mahasiswa Lain? (y/n): ";
        cin >> pilihan;

    } while ((pilihan == 'y' || pilihan == 'Y') && jumlahMahasiswa < maxMahasiswa);

    // Menampilkan semua data mahasiswa yang telah dimasukkan
    cout << "\nData Mahasiswa yang Dimasukkan:" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        double nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].nilaiTugas, mahasiswa[i].nilaiUTS, mahasiswa[i].nilaiUAS);
        char grade = tentukanGrade(nilaiAkhir);
        cout << "\nNama Mahasiswa: " << mahasiswa[i].nama << endl;
        cout << "Nilai Akhir: " << nilaiAkhir << endl;
        cout << "Grade: " << grade << endl;
    }

    return 0;
}