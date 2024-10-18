/*
Pak Dengklek memiliki sebuah kandang bebek seluas 
12
12 meter persegi.

Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
7 meter persegi lebih luas daripada kandang sebelumnya.

Buatlah program yang mengeluarkan ukuran luas kandang-kandang (dalam meter persegi) sesuai urutan pembelian yang harus dilakukan, satu baris untuk setiap kandang, untuk tiga bulan ke depan, dengan format:

1: luas kandang untuk bulan 1
2: luas kandang untuk bulan 2
3: luas kandang untuk bulan 3
Lengkapilah program di sebelah kanan. Pastikan Anda melengkapi kondisi perulangan while dengan tepat
*/
#include <iostream>
using namespace std;

int main() {
    // Inisialisasi variabel luas kandang awal
    int luas_kandang =  12; // Luas awal kandang dalam meter persegi
    int nomor_baris = 1; // Variabel counter untuk nomor baris

    // Kondisi perulangan untuk tiga bulan
    while (nomor_baris <= 3) {
        // Tambahkan  7 ke luas kandang untuk setiap bulan
        luas_kandang += 7;

        // Cetak ukuran luas kandang untuk setiap bulan
        cout << nomor_baris << ": " << luas_kandang << endl;

        // Tambahkan 1 ke nomor_baris untuk menghitung bulan berikutnya
        nomor_baris++;
    }

} 
