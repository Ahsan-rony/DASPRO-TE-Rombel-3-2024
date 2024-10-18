#include <cstdio>

int faktorial(int x) {
    // Base case
    if (x == 1) {
        return 1;
    }
    // Recursive call
    return x * faktorial(x - 1);
}

int main() {
    int N = 4; // Misalkan kita ingin mencari 4!
    int hasil = faktorial(N);
    std::printf("%d\n", hasil); // Output hasil
    return 0;
}
