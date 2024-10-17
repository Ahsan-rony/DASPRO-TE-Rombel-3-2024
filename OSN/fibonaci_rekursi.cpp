#include <cstdio>

int fibonacci(int N) {
    if (N <= 1) {
        return N;
    } else {
        return fibonacci(N - 1) + fibonacci(N - 2);
    }
}

int main() {
    int N = 4; // Mengganti N dengan 4

    // Menghitung dan mencetak angka Fibonacci
    printf("Fibonacci dari %d adalah %d\n", N, fibonacci(N));

    return 0;
}
