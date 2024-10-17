// Soal
// Pak Dengklek membuka sebuah toko kandang bebek. Ia menjual 5 kandang bebek dengan ukuran-ukuran sebagai berikut:
// 1. 225×335 cm persegi
// 2. 215×394 cm persegi
// 3. 198×400 cm persegi
// 4. 314×298 cm persegi
// 5. 299×278 cm persegi
// Seorang pembeli ingin membeli kandang yang berukuran setidaknya 80000 cm persegi. Ada berapa kandang di toko tersebut yang memenuhi?

#include <iostream>
using namespace std;

int main() {
    int luas1 = 225 * 335;
    int luas2 = 215 * 394;
    int luas3 = 198 * 400;
    int luas4 = 314 * 298;
    int luas5 = 299 * 278;

    int hasil = 0;

    if (luas1 >= 80000) {
        hasil++;
    }

    if (luas2 >= 80000) {
        hasil++;
    }

    if (luas3 >= 80000) {
        hasil++;
    }
    
    if (luas4 >= 80000) {
        hasil++;
    }
    
    if (luas5 >= 80000) {
        hasil++;
    }

    cout << hasil << endl;
    return 0;
}

// Pada soal ini, pada dasarnya kita menjalankan kode berikut secara berulang-ulang:

// if (variabel >= 80000) {
//    hasil++;
//}
// dengan cara copy-paste. Ini karena kita menyimpan kelima data nilai luas kandang ke dalam lima variabel berbeda.

// Selanjutnya, kita akan belajar bagaimana cara menyederhanakannya.
