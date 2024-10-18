#include <cstdio>

int faktorialRekursif(int N) {
    if (N == 1) return 1;
    return N * faktorialRekursif(N - 1);
}

int main() {
    int N;
    std::scanf("%d", &N);
    std::printf("%d\n", faktorialRekursif(N));
    return 0;
}
