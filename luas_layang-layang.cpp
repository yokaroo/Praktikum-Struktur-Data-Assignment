#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas layang-layang
double hitungLuasLayangLayang(double diagonal1, double diagonal2) {
    double luas = (diagonal1 * diagonal2) / 2;
    return luas;
}

int main() {
    double diagonal1, diagonal2;

    // Meminta input dari pengguna
    cout << "Masukkan panjang diagonal pertama: ";
    cin >> diagonal1;
    cout << "Masukkan panjang diagonal kedua: ";
    cin >> diagonal2;

    // Memanggil fungsi hitungLuasLayangLayang dan menampilkan hasilnya
    double luas = hitungLuasLayangLayang(diagonal1, diagonal2);
    cout << "Luas layang-layang adalah: " << luas << endl;

    return 0;
}