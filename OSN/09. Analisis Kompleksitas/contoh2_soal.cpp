 #include <iostream>
using namespace std;

int main() {
    int total = 0;  // Deklarasi dan inisialisasi variabel 'total'
    int N = 5;      // Misalkan nilai N diberikan sebagai 5 (atau bisa disesuaikan)

    // Perulangan bersarang dengan 'j' dimulai dari 'i'
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) { // j dimulai dari i
            total++;
        }
    }

    // Cetak nilai total setelah perulangan
    cout << "Total: " << total << endl;

    return 0;
}
