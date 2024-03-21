#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Membuat map dengan key berupa string dan value berupa integer
    map<string, int> umur;

    // Menambahkan elemen ke dalam map
    umur["Alice"] = 25;
    umur["Bob"] = 30;
    umur["Charlie"] = 35;

    // Mengakses elemen map dan menampilkannya
    cout << "Umur Alice: " << umur["Alice"] << endl;
    cout << "Umur Bob: " << umur["Bob"] << endl;
    cout << "Umur Charlie: " << umur["Charlie"] << endl;

    // Menggunakan iterator untuk menampilkan semua elemen map
    cout << "\nMenampilkan semua elemen map:\n";
    for (auto it = umur.begin(); it != umur.end(); ++it) {
        cout << "Nama: " << it->first << ", Umur: " << it->second << endl;
    }

    return 0;
}

