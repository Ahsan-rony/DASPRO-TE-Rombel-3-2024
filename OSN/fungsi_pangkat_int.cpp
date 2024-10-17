#include <stdio.h>

int pangkat(int a, int b) {
    int hasil = 1;
    if (b < 0) {
        // Jika b negatif, kita bisa mengembalikan 0 atau
        // melakukan sesuatu yang sesuai, misalnya:
        return 0; // atau bisa diubah sesuai kebutuhan
    }
    for (int i = 0; i < b; i++) {
        hasil *= a;
    }
    return hasil;
}

int main() {
    int a, b;
    printf("Masukkan bilangan (a): ");
    scanf("%d", &a);
    printf("Masukkan pangkat (b): ");
    scanf("%d", &b);
    
    int hasil = pangkat(a, b);
    printf("%d^%d = %d\n", a, b, hasil);
    
    return 0;
}
