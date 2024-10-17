#include <cstdio>

void gambar(int x) {
if (x > 1000) {
return;
}
for (int i = 0; i < x; i++) {
printf("*");
}
printf("\n");
}
