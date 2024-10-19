#include <stdio.h>

int main() {
    int x;

    // Misalnya kita mendapatkan input dari pengguna
    printf("Masukkan nilai x: ");
    scanf("%d", &x);

    if ((x > 0) && (x % 2 == 1)) {
        printf("positif dan ganjil\n");
    } else if ((x > 0) && (x % 2 == 0)) {
        printf("positif dan genap\n");
    } else if ((x < 0) && (x % 2 == 1)) {
        printf("negatif dan ganjil\n");
    } else if ((x < 0) && (x % 2 == 0)) {
        printf("negatif dan genap\n");
    } else {
        printf("x adalah nol\n");
    }

    return 0;
}
