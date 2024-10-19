#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
long long faktorial(int n) {
    if (n == 1) { // Basis rekursi: jika n sama dengan 1
        return 1; // Faktorial dari 1 adalah 1
    } else {
        return faktorial(n - 1) * n; // Rekursi: n! = n * (n-1)!
    }
}

int main() {
    int n = 10, m = 20; // Mendeklarasikan dua variabel integer n dan m

    // Menghitung dan mencetak jumlah faktorial dari n dan m
    cout << faktorial(n) + faktorial(m) << endl; // Mengoutput hasil faktorial n dan m
}
// keluaran yang tercetak adalah 2432902008180268800
