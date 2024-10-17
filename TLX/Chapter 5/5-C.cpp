/*
Soal
Pak Dengklek ingin membuat sebuah kolam berbentuk persegi untuk bebek-bebeknya, dengan ketentuan berikut:

Luas kolamnya antara 100.000 sampai dengan 200.000 cm persegi.
Luas kolam (dalam cm persegi) adalah bilangan genap.
Luas kolam (dalam cm persegi) adalah bilangan kuadrat sempurna.
Berapakah luas kolam terkecil yang memenuhi seluruh syarat tersebut? Lengkapilah program di sebelah kanan agar mengeluarkan luas yang diminta.
*/

#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas ini bukan bilangan genap, iterasi ini bisa dihentikan
        // (dilewati), karena luas ini pasti tidak memenuhi syarat.
        if (luas % 2 != 0) {
            continue;
        }
        
        // Sekarang, kita akan cek apakah luas ini merupakan bilangan kuadrat sempurna.
        bool kuadrat_sempurna = false;

        for (int k = 1; k * k <= luas; k++) {
            // Jika luas adalah tepat k * k,
            // maka luas ini merupakan bilangan kuadrat sempurna.
            if (k * k == luas) {
                kuadrat_sempurna = true;
                break;
            }
        }

        if (kuadrat_sempurna) {
            // Kita telah menemukan luas terkecil yang memenuhi seluruh syarat.

            // Cetak luas ini.
            cout << luas << endl;

            // Kita tidak perlu lagi melanjutkan perulangan.
            break;
        }
    }
}


/*
Penjelasan:

Inisialisasi Loop: Program mulai iterasi dari luas = 100000 hingga luas = 200000.

Cek Bilangan Genap: Jika luas bukan bilangan genap (luas % 2 != 0), iterasi dilewati dengan continue.

Cek Bilangan Kuadrat Sempurna: Menggunakan loop dalam untuk memeriksa apakah luas adalah kuadrat sempurna dengan memeriksa apakah ada k sehingga k * k == luas.

Cetak Hasil dan Hentikan Loop: Jika ditemukan luas yang merupakan kuadrat sempurna, cetak nilai luas dan hentikan loop dengan break.

Tujuan utama program ini adalah menemukan dan mencetak bilangan genap terkecil dalam rentang 100.000 hingga 200.000 yang juga merupakan kuadrat sempurna. Simple but effective!
  */
