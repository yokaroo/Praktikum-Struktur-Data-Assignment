#include <iostream>
using namespace std;

// Struktur untuk merepresentasikan data persegi panjang
struct PersegiPanjang {
    double panjang;
    double lebar;
};

// Kelas untuk menghitung luas persegi panjang
class HitungLuas {
public:
    // Fungsi untuk menghitung luas persegi panjang
    double luasPersegiPanjang(double panjang, double lebar) {
        return panjang * lebar;
    }
};

int main() {
    // Deklarasi objek struktur PersegiPanjang
    PersegiPanjang pp;

    // Meminta input dari pengguna
    cout << "Masukkan panjang persegi panjang: ";
    cin >> pp.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> pp.lebar;

    // Membuat objek kelas HitungLuas
    HitungLuas hitungLuas;

    // Menghitung luas persegi panjang menggunakan fungsi dalam kelas
    double luas = hitungLuas.luasPersegiPanjang(pp.panjang, pp.lebar);

    // Menampilkan hasil
    cout << "Luas persegi panjang adalah: " << luas << endl;

    return 0;
}
