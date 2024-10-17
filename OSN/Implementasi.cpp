#include <cstdio>
#include <cstring>

const int N = 3; // Misalkan N adalah jumlah elemen
int catat[N]; // Array untuk menyimpan kombinasi
bool pernah[N + 1]; // Array untuk melacak elemen yang sudah digunakan

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        // Cetak kombinasi
        for (int i = 0; i < N; i++) {
            printf("%d ", catat[i]); // Cetak
        }
        printf("\n");
    } else {
        // Masuk ke lapisan lebih dalam
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) {
                // i belum pernah?
                pernah[i] = true;
                // Gunakan
                catat[kedalaman] = i; // Catat di sini
                tulis(kedalaman + 1);
                pernah[i] = false; // Selesai menggunakan
            }
        }
    }
}

int main() {
    memset(pernah, false, sizeof(pernah)); // Inisialisasi array 'pernah' dengan false
    tulis(0); // Mulai rekursi dari kedalaman 0
    return 0;
}
