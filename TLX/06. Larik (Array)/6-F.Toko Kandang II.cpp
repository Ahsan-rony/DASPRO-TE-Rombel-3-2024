#include <iostream>
using namespace std;

int main() {
    // Inisialisasi ukuran kandang dari setiap toko
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    // Variabel untuk menghitung banyaknya kandang yang memenuhi syarat
    int hasil = 0;

    // Perulangan untuk setiap toko (baris)
    for (int i = 0; i < 4; i++) {
        // Perulangan untuk setiap merek kandang (kolom)
        for (int j = 0; j < 3; j++) {
            // Jika luas kandang lebih besar atau sama dengan 80.000 cm persegi
            if (luas[i][j] >= 80000) {
                hasil++;
            }
        }
    }

    // Tampilkan hasil (jumlah kandang yang memenuhi syarat)
    cout << hasil << endl;

    return 0;
}
