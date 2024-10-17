#include <cstdio> // Library untuk printf

void gambar(int x) {
    if (x > 1000) {
        return; // Menghentikan fungsi jika x lebih dari 1000
    }

    for (int i = 0; i < x; i++) {
        printf("*"); // Mencetak '*' sebanyak x kali
    }

    printf("\n"); // Pindah ke baris baru setelah mencetak semua '*'
}

int main() {
    int n;
    printf("Masukkan jumlah bintang: ");
    scanf("%d", &n); // Mengambil input dari pengguna
    gambar(n); // Memanggil fungsi gambar dengan parameter n
    return 0;
}
