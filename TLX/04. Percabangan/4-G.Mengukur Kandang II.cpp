// Soal
// Pak Dengklek memiliki 3 buah kandang:

// Kandang A berukuran 364 × 79 cm persegi.
// Kandang B berukuran 243×99 cm persegi.
// Kandang C berukuran 189×155 cm persegi.
// Pak Dengklek ingin mengetahui kandang yang luasnya terbesar dan terkecil. Lengkapilah program di sebelah kanan agar mengeluarkan dua buah baris:

// Baris pertama berisi nama kandang yang luasnya terbesar.
// Baris pertama berisi nama kandang yang luasnya terkecil.
// Dijamin bahwa luas ketiga kandang tersebut berbeda-beda.

// Jawaban

#include <iostream>
#include <string>
using namespace std;

int main() {
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;

    string terbesar, terkecil;

    if (A > B && A > C) {
        // jika A lebih besar dari B dan C, maka A terbesar
        terbesar = "A";

        // cari yang terkecil, yakni yang lebih kecil antara B dan C
        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }
    } else if (B>A && B>C) {
        // jika B lebih besar dari A dan C, maka B terbesar
        terbesar = "B";

        // cari yang terkecil, yakni yang lebih kecil antara A dan C
        if (A<C) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }
    } else {
        // sampai sini, maka C terbesar
        terbesar = "C";

        // cari yang terkecil, yakni yang lebih kecil antara A dan B
        if (A<B) {
            terkecil = "A";
    }   else {
        terkecil = "B";
    }
    }

    cout << terbesar << endl;
    cout << terkecil << endl;
}

// Keluaran yang keluar adalah C dan B
