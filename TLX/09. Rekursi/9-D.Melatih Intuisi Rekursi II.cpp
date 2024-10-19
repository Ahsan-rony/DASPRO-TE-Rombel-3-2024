#include <iostream>
#include <string>
using namespace std;

int hitung_vokal(string s) {
    if (s.empty()) { // Basis rekursi
        return 0;
    }

    char c = tolower(s[0]); // Ubah karakter ke huruf kecil untuk memudahkan pengecekan vokal
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // Periksa apakah karakter vokal
        return 1 + hitung_vokal(s.substr(1)); // Tambahkan 1 jika vokal dan lanjutkan ke karakter berikutnya
    } else {
        return hitung_vokal(s.substr(1)); // Lanjutkan ke karakter berikutnya tanpa menambah jumlah vokal
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}
