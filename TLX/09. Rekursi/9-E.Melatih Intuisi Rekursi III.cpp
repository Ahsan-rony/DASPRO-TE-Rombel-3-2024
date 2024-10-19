// Lengkapilah fungsi jumlah_digit() di sebelah kanan secara rekursif sesuai materi di atas, lalu gunakanlah untuk mencetak jumlah digit pada bilangan 1982304556

#include <iostream>
using namespace std;

int jumlah_digit(int n) {
    // Kasus dasar: jika n adalah bilangan satu digit
    if (n < 10) {
        return n;
    } else {
        // Tambahkan digit terakhir dengan hasil rekursi pada bilangan tanpa digit terakhir
        return n % 10 + jumlah_digit(n / 10);
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << jumlah_digit (1982304556) << endl;
}

// Maka keluarannya adalah 43
