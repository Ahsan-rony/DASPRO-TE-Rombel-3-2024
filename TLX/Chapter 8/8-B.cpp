//Pak Dengklek memiliki sebuah kandang bebek unik yang memiliki penampang berupa segitiga, yang berukuran:
//alas:1213 desimeter
//tinggi:1619 desimeter
//Cetaklah luas penampangnya, dalam desimeter persegi! Luas sebuah segitiga adalah setengah dari hasil perkalian alas dan tingginya.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int alas = 1213;
    int tinggi = 1619;

    // Menggunakan double untuk hasil yang lebih akurat
    double luas = static_cast<double>(alas) * tinggi / 2; 
    cout << fixed << setprecision(1) << luas << endl; // Menampilkan dengan 1 angka di belakang koma

    return 0;
}

//penjelasan
//#include <iostream>: Digunakan untuk input dan output di C++.
//#include <iomanip>: Digunakan untuk mengatur format output, seperti jumlah angka di belakang koma.
//using namespace std;Mengizinkan penggunaan elemen dari namespace std tanpa perlu menuliskan std:: setiap kali
//int main() {Titik awal eksekusi program.
//int alas = 1213;int tinggi = 1619; Mendeklarasikan dua variabel bertipe int, alas dan tinggi, dengan nilai masing-masing 1213 dan 1619.
//double luas = static_cast<double>(alas) * tinggi / 2; static_cast<double>(alas): Mengubah tipe alas menjadi double agar hasil pembagian lebih akurat (mencegah pembulatan integer)
//fixed: Mengatur output agar menggunakan notasi desimal tetap.
//setprecision(1): Mengatur jumlah angka di belakang koma menjadi 1.
//cout: Menampilkan nilai luas ke layar, diakhiri dengan endl untuk baris baru
//return 0;Mengembalikan 0, menandakan bahwa program telah selesai dengan sukses.
