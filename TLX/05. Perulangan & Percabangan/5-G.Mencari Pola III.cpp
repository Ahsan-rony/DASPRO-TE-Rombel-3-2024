/* 
Bebek ke-7 mengirimkan pesan berikut:

*.....*
.*...*.
..*.*..
...*...
..*.*..
.*...*.
*.....*

Carilah polanya, kemudian lengkapilah program di sebelah kanan agar mengeluarkan pesan dari bebek ke-10!
*/
#include <iostream>
using namespace std;

int main() {
    int N = 10; // N memiliki nilai 10

    for (int i = 1; i <= N; i++) { // Loop untuk baris
      // blok kode yang akan diulang daro mulai i=1 sampai i<=N
        for (int j = 1;j<=N;j++) // Loop untuk kolom
      // blok kode yang akan diulang daro mulai j=1 sampai j<=N    
        if (j==i|| j==11-i ){ // Jika memenuhi salah satu kondisi
            cout <<"*"; // Cetak bintang
          // Kode ini dijalankan jika kondisi bernilai true
        }else {
            cout <<".";// Cetak titik
          // Kode ini dijalankan jika kondisi bernilai false
        }
    
        cout << endl;// Pindah ke baris berikutnya
    }
}
