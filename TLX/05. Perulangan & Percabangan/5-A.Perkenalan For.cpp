// Pak Dengklek memiliki kandang-kandang persegi, dengan panjang sisinya adalah setiap bilangan bulat antara 121 sampai dengan 125 (inklusif). Ia ingin mengetahui luas setiap kandangnya. //

#include <iostream> // Menyertakan library input-output standar C++
using namespace std; // Memungkinkan penggunaan elemen dari namespace std tanpa prefiks 'std::'

int main() { // Fungsi utama tempat eksekusi program dimulai
    for (int sisi = 121; sisi <= 125; sisi += 1) { // Loop dari 121 hingga 125
        cout << sisi * sisi << endl; // Menghitung kuadrat dari 'sisi' dan mencetaknya
    }
}
/* keluaran yang tercetak adalah 
   14641
   14884
   15129
   15376
   15625 */
