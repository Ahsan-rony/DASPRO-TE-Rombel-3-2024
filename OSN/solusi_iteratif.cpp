#include <cstdio>
int faktorial(int x) {
int jawaban = 1;
for (int i = 2; i <= x; i++) {
jawaban *= i;
}
return jawaban;
}
