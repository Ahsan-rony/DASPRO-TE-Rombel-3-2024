#include <cstdio>
int main() {
int a, b, c, x, hasil;
// Inisialisasi
a = 1;
b = 3;
c = -2;
// Baca nilai x
scanf("%d", &x);
// Hitung hasil fungsi
hasil = a*x*x + b*x + c;
// Cetak
printf("ax^2 + bx + c = %d\n", hasil);
}
