/* Soal
Sekarang, di sebelah kanan kita terdapat sebuah program C++ juga menyelesaikan soal Memborong Bebek sebelumnya. Namun, program ini TIDAK sesuai kaidah ruang lingkup. Perbaikilah sesuai dengan materi yang baru saja kita pelajari.*/

#include <iostream>
using namespace std;

// Variabel global untuk menyimpan jumlah bebek jantan dan betina
int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

// Fungsi untuk menghitung biaya pembelian bebek
int biaya(int total_bebek) {
    int harga_bebek; // Deklarasi variabel harga_bebek di luar if

    // Menentukan harga per bebek berdasarkan jumlah
    if (total_bebek < 10) {
        harga_bebek = 100000;
    } else if (total_bebek <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }

    // Mengembalikan total biaya
    return harga_bebek * total_bebek;
}

// Fungsi untuk menghitung total biaya jantan dan betina untuk hari tertentu
int biaya_jantan_dan_betina(int hari) {
    return biaya(jantan[hari]) + biaya(betina[hari]);
}

int main() {
    for (int i = 0; i < 4; i++) {
        // Mencetak total biaya untuk hari ke-i
        cout << biaya_jantan_dan_betina(i) << endl;
    }

    return 0; 
}
