#include <cstdio>

void pangkat(int a, int b, int &hasil) {
    hasil = 1;
    for (int i = 0; i < b; i++) {
        hasil *= a;
    }
}

int main() {
    int a, b, hasil;

    printf("Masukkan bilangan (a): ");
    scanf("%d", &a);
    printf("Masukkan pangkat (b): ");
    scanf("%d", &b);

    if (b < 0) {
        printf("Pangkat tidak boleh negatif.\n");
        return 1; // keluar dari program jika b negatif
    }

    pangkat(a, b, hasil);
    printf("%d^%d = %d\n", a, b, hasil);

    return 0;
}
