#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas permukaan balok
double hitungLuasPermukaan(double panjang, double lebar, double tinggi) {
    double luasPermukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
    return luasPermukaan;
}

int main() {
    double panjang, lebar, tinggi;

    // Meminta input dari pengguna
    cout << "Masukkan panjang balok: ";
    cin >> panjang;
    cout << "Masukkan lebar balok: ";
    cin >> lebar;
    cout << "Masukkan tinggi balok: ";
    cin >> tinggi;

    // Memanggil fungsi hitungLuasPermukaan dan menampilkan hasilnya
    double luasPermukaan = hitungLuasPermukaan(panjang, lebar, tinggi);
    cout << "Luas permukaan balok adalah: " << luasPermukaan << endl;

    return 0;
}