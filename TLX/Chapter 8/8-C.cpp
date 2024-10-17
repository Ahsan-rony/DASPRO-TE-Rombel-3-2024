//Pak Dengklek menemukan sebuah koran lama. Pada halaman pertama, terdapat artikel yang bertuliskan:
//lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibustellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    int total_vokal = 0;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        // Memeriksa apakah karakter adalah vokal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            total_vokal++;
        }
    }

    cout << total_vokal << endl; // Mencetak total vokal
    return 0;
}

//penjelasan
//#include <iostream>: Digunakan untuk input dan output di C++.
//#include <string>: Digunakan untuk menggunakan tipe data string
//using namespace std;Memungkinkan penggunaan elemen dari namespace std tanpa perlu menuliskan std:: setiap kali.
//int main() {Titik awal eksekusi program.
//string s = (Mendeklarasikan sebuah variabel bertipe string bernama s, yang berisi kalimat panjang)
//int total_vokal = 0;Mendeklarasikan variabel total_vokal untuk menghitung jumlah vokal, diinisialisasi dengan 0.
//Menggunakan loop for untuk iterasi melalui setiap karakter dalam string s. s.size() memberikan panjang string.
//char c = s[i];: Mengambil karakter pada indeks i dan menyimpannya dalam variabel c.
//Memeriksa apakah karakter c adalah salah satu vokal (baik huruf kecil maupun besar).
//Jika c adalah vokal, maka total_vokal akan bertambah satu
//cout << total_vokal << endl; // Mencetak total vokal Menampilkan jumlah total vokal yang ditemukan dalam string s
