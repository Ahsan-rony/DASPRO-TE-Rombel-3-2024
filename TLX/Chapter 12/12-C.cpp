#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int currentNum = 0; // untuk menyimpan angka yang akan dicetak

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << currentNum;
            currentNum = (currentNum + 1) % 10; // jika mencapai 10, kembali ke 0
        }
        cout << endl; // pindah ke baris berikutnya
    }

    return 0;
}
