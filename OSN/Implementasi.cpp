#include <iostream>
using namespace std;

const int N = 3;         // Panjang password atau jumlah angka
int catat[N];            // Array untuk menyimpan password sementara
bool pernah[N + 1];      // Array untuk menandai apakah angka sudah digunakan

// Fungsi untuk menulis password
void tulis(int kedalaman) {
    if (kedalaman >= N) {
        // Jika kedalaman mencapai batas N, cetak password
        for (int i = 0; i < N; i++) {
            printf("%d", catat[i]); // Cetak angka yang dicatat
        }
        printf("\n");
    } else {
        // Masuk ke lapisan lebih dalam
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) { // Apakah angka i belum pernah digunakan?
                pernah[i] = true;          // Tandai bahwa angka ini sudah digunakan
                catat[kedalaman] = i;      // Catat angka i pada posisi kedalaman
                tulis(kedalaman + 1);      // Lanjut ke kedalaman berikutnya
                pernah[i] = false;         // Reset kembali setelah rekursi selesai
            }
        }
    }
}

int main() {
    // Inisialisasi semua elemen pernah[] dengan false
    for (int i = 0; i <= N; i++) {
        pernah[i] = false;
    }
    
    tulis(0); // Memulai rekursi dari kedalaman 0
    return 0;
}
