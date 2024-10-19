//Soal
//Lengkapilah fungsi biner() di sebelah kanan secara rekursif agar mengembalikan sebuah string yang 
//merupakan representasi biner dari argumennya; yakni, dalam basis 2. Sebagai contoh:
//biner(0) mengembalikan "0"
//biner(2) mengembalikan "10"
//biner(7) mengembalikan "111"
//biner(73) mengembalikan "1001001"
//Lalu, gunakanlah fungsi tersebut untuk mencetak representasi biner dari:
//0
//1
//512
//1697
//1048575

#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    // Kasus dasar: jika n adalah 0, kembalikan "0"
    if (n == 0) {
        return "0";
    }
    
    // Kasus dasar: jika n adalah 1, kembalikan "1"
    if (n == 1) {
        return "1";
    }

    // Panggil rekursi untuk n dibagi 2 dan tambahkan digit terakhir (n % 2)
    return biner(n / 2) + to_string(n % 2);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << biner(0) << endl;
    cout << biner(1) << endl;
    cout << biner(512) << endl;
    cout << biner(1697) << endl;
    cout << biner(1048575) << endl;
} 
