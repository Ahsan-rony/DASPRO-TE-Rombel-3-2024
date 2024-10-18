 #include <iostream>
using namespace std;

int main() {
    int N = 20;          // Misalkan N diberikan nilai (contoh: N = 20)
    int counter = 1;     // Deklarasi dan inisialisasi variabel 'counter'

    // Perulangan while yang berjalan selama counter*counter < N
    while (counter * counter < N) {
        counter++;
    }

    // Cetak nilai counter terakhir setelah perulangan selesai
    cout << "Counter: " << counter << endl;

    return 0;
}
