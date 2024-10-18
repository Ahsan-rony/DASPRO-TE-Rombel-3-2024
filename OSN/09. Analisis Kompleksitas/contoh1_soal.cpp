#include <iostream>
using namespace std;

int main() {
    int total = 0;  // Deklarasi dan inisialisasi variabel 'total'
    int N = 5;      // Misalkan nilai N diberikan sebagai 5 (atau bisa disesuaikan)

    // Dua perulangan bersarang
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            total++;
        }
    }

    // Cetak nilai total setelah perulangan
    cout << "Total: " << total << endl;

    return 0;
}
