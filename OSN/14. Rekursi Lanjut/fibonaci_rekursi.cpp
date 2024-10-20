#include <cstdio>

int fibonacci(int N) {
    if (N <= 1) {
        return N;
    } else {
        return fibonacci(N - 1) + fibonacci(N - 2);
    }
}

// Agar bahasa pemrograman itu bisa digunakan saya menambahkan fungsi main untuk dapat menginput angka (n)

#include <cstdio>

// Fungsi Fibonacci menggunakan rekursi
int fibonacci(int N) {
    if (N <= 1) {
        return N;
    } else {
        return fibonacci(N - 1) + fibonacci(N - 2);
    }
}

int main() {
    int N;

    // Meminta input dari user
    printf("Masukkan angka N: ");
    scanf("%d", &N);

    // Menampilkan hasil dari fungsi fibonacci
    printf("Fibonacci(%d) = %d\n", N, fibonacci(N));

    return 0;
}
