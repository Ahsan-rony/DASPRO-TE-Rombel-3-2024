//Pak Dengklek memberikan Anda Q buah bilangan bulat: N1, N2, ..., NQ.
//Untuk setiap bilangan, tentukan apakah bilangan tersebut bilangan prima atau bukan.
1≤Q≤1000
1≤N≤1000000

#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk memeriksa apakah bilangan merupakan bilangan prima
bool isPrime(int n) {
    if (n <= 1) return false; // 1 dan bilangan negatif bukan prima
    if (n <= 3) return true;  // 2 dan 3 adalah bilangan prima

    if (n % 2 == 0 || n % 3 == 0) return false; // mengeliminasi kelipatan 2 dan 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false; // mengeliminasi faktor yang lebih besar
    }
    return true; // jika tidak ada faktor ditemukan, n adalah prima
}

int main() {
    int Q;
    cin >> Q; // Membaca jumlah bilangan yang akan diperiksa
    vector<int> numbers(Q);

    // Membaca semua bilangan
    for (int i = 0; i < Q; ++i) {
        cin >> numbers[i];
    }

    // Memeriksa setiap bilangan dan mencetak hasilnya
    for (int i = 0; i < Q; ++i) {
        if (isPrime(numbers[i])) {
            cout << "YA" << endl; // Bilangan prima
        } else {
            cout << "BUKAN" << endl; // Bukan bilangan prima
        }
    }

    return 0;
}

//mengeluarkan bilangan prima atau tidak menggunakan fungsi isPrime,
//mencetak "YA" jika bilangan tersebut prima, dan "BUKAN" jika tidak.
