soal no1. Dalam program ini, fungsi hitungLuasPermukaan digunakan untuk menghitung luas permukaan balok berdasarkan panjang, lebar, dan tinggi yang diberikan. Kemudian, di dalam main, pengguna diminta untuk memasukkan panjang, lebar, dan tinggi balok. Setelah itu, fungsi hitungLuasPermukaan dipanggil dengan input pengguna, dan hasilnya ditampilkan. Dalam program ini, fungsi hitungLuasLayangLayang digunakan untuk menghitung luas layang-layang berdasarkan panjang diagonal pertama dan diagonal kedua yang diberikan. Di dalam main, pengguna diminta untuk memasukkan panjang kedua diagonal. Setelah itu, fungsi hitungLuasLayangLayang dipanggil dengan input pengguna, dan hasilnya ditampilkan.Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman,compiler dan sistem operasinya.
     
     
     no2. Fitur Clas adalah fitur Object Oriented Program(OPP) pada bahasa C++ yang mirip dengan fitur data structures Struct pada bahasa C. Keduanya berfungsi untuk membungkus tipe data di dalamnya sebagai anggota. menurut learn.microsoft.com perbedaan antara.
     
     
     
     no3. Tipe Data yang Dapat Disimpan:

Array: Array adalah kumpulan elemen-elemen dengan tipe data yang sama. Ini berarti semua elemen dalam array memiliki tipe data yang seragam.
std::map: std::map adalah koleksi pasangan key-value di mana setiap key unik diikuti oleh nilai tertentu. Key dan value dalam std::map tidak harus memiliki tipe data yang sama, sehingga memungkinkan fleksibilitas dalam struktur datanya.
Akses Elemen:

Array: Untuk mengakses elemen-elemen dalam array, Anda menggunakan indeks numerik yang dimulai dari 0.
std::map: Anda mengakses elemen dalam std::map dengan menggunakan key-nya. Ini berarti Anda mengidentifikasi elemen yang ingin diakses dengan menggunakan key, bukan indeks numerik.
Kapasitas:

Array: Kapasitas array harus ditentukan pada saat pendeklarasian dan tidak dapat berubah selama program berjalan.
std::map: std::map dapat tumbuh dan menyusut secara dinamis saat elemen ditambahkan atau dihapus, tanpa memerlukan deklarasi kapasitas awal.
Waktu Akses:

Array: Waktu akses ke elemen dalam array adalah O(1), artinya akses ke elemen tunggal terjadi dalam waktu konstan.
std::map: Waktu akses ke elemen dalam std::map adalah O(log n), di mana n adalah jumlah elemen dalam map. Ini disebabkan oleh struktur data yang biasanya digunakan untuk mengimplementasikan map, seperti pohon merah-hitam.
Kemampuan Penyimpanan:

Array: Array hanya dapat menyimpan elemen-elemen bertipe data yang sama.
std::map: std::map dapat menyimpan pasangan key-value dengan tipe data yang berbeda, yang memungkinkannya untuk menyimpan berbagai jenis data.
Penggunaan Memori:

Array: Array menggunakan memori yang kontigu.
std::map: std::map menggunakan alokasi memori dinamis dan struktur data kompleks untuk mengatur pasangan key-value, yang mungkin memerlukan lebih banyak overhead memori.

