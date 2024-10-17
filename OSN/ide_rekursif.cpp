#include <iostream>
using namespace std;

const int N = 3;  // Panjang password atau jumlah karakter yang digunakan
int password[N];  // Array untuk menyimpan kombinasi password

// Fungsi untuk menulis password
void tulis(int kedalaman) {
    if (kedalaman >= N) {
        // Jika kedalaman mencapai batas N, cetak password
        for (int i = 0; i < N; i++) {
            cout << password[i];
        }
        cout << endl;
    } else {
        // Masuk ke lapisan lebih dalam, dengan mencoba semua kemungkinan angka dari 1 hingga N
        for (int i = 1; i <= N; i++) {
            password[kedalaman] = i; // Set posisi saat ini dengan nilai i
            tulis(kedalaman + 1);    // Rekursi ke kedalaman berikutnya
        }
    }
}

int main() {
    tulis(0); // Memulai rekursi dari kedalaman 0
    return 0;
}
