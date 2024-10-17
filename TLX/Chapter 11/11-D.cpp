#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int best_r = 1, best_c = N; // Inisialisasi pasangan (1, N)
    int min_diff = N - 1; // Selisih minimum (N - 1 pada awalnya)

    // Mencari pasangan (r, c)
    for (int r = 1; r <= sqrt(N); r++) {
        if (N % r == 0) { // Jika r adalah pembagi N
            int c = N / r;

            if (r <= c) { // Pastikan r <= c
                int diff = c - r; // Hitung selisih
                if (diff < min_diff) { // Jika selisih lebih kecil
                    best_r = r;
                    best_c = c;
                    min_diff = diff;
                }
            }
        }
    }

    cout << best_r << " " << best_c << endl;
    return 0;
}
