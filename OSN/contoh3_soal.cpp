 #include <iostream>
using namespace std;

int main() {
    int total = 0;  // Deklarasi dan inisialisasi variabel 'total'
    int N = 5;      // Deklarasi variabel 'N' dengan nilai (misalkan N = 5)
    int M = 4;      // Deklarasi variabel 'M' dengan nilai (misalkan M = 4)

    // Dua perulangan bersarang untuk menghitung total
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            total++;
        }
    }

    // Cetak nilai total setelah perulangan
    cout << "Total: " << total << endl;

    return 0;
}
