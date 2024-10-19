#include <iostream>
using namespace std;

int main() {
    int luas[5];

    // Menghitung luas setiap kandang
    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    // Buat sebuah variabel yang menampung luas terbesar.
    // Pada awalnya, isi variabel tersebut dengan luas dari kandang pertama.
    int luas_terbesar = luas[0];

    // Untuk setiap kandang sisanya:
    for (int i = 1; i < 5; i++) {
        // Jika luasnya lebih besar daripada variabel luas terbesar:
        if (luas[i] > luas_terbesar) {
            // Perbarui nilai variabel luas terbesar dengan luas kandang tersebut.
            luas_terbesar = luas[i];
        }
    }

    // Menampilkan luas terbesar
    cout << luas_terbesar << endl;

    return 0;
}


