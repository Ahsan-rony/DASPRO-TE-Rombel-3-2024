#include <iostream>
using namespace std;

// Data jumlah bebek jantan dan betina
int jantan[4] = {8, 80, 50, 60};   // Jumlah jantan untuk hari pertama disesuaikan
int betina[4] = {1, 10, 9, 40};    // Jumlah betina untuk hari pertama disesuaikan

// Fungsi untuk menghitung selisih antara dua angka
int selisih(int a, int b) {
    if (a > b) {
        return a - b;  // Mengembalikan selisih jika a lebih besar
    } else {
        return 0;  // Jika tidak, mengembalikan 0
    }
}

// Fungsi untuk menghitung denda pada hari tertentu
int denda_pada_hari(int hari) {
    return 1000 * selisih(jantan[hari], betina[hari]);  // Menghitung denda
}

// Fungsi untuk menghitung total denda
int total_denda() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += denda_pada_hari(i);  // Menjumlahkan denda untuk setiap hari
    }
    return total;  // Mengembalikan total denda
}

int main() {
    cout << total_denda() << endl;  // Mencetak total denda
    return 0;
}
