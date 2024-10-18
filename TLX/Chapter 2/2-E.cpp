/* 
#include <iostream> // untuk menggunakan cout dan endl
#include <string>   // untuk menggunakan string
using namespace std;

int main() {
    int tanggal = 15;
    int tahun = 2023;

    // jangan lupa bahwa string perlu diapit dengan kutip dua
    string bulan = ...; 

    // cetak kata sandi
    cout << tahun ... << "-" << bulan ... tanggal ... << endl;
}
Pak Dengklek ingin mengganti lagi kata sandi kandangnya menjadi sedikit rumit, sesuai dengan tanggal lahir bebek tertuanya, dengan format:

[tahun+10]-[bulan]-[tanggal+7]
Sebagai contoh, untuk tanggal 1 Januari 2023, kata sandi sesuai format di atas adalah:

2033-Januari-8
Diketahui, bebek tertua Pak Dengklek lahir pada 15 Februari 2023. Lengkapilah program di sebelah kanan agar mengeluarkan sebuah baris berisi kata sandi barunya.
*/

#include <iostream> // untuk menggunakan cout dan endl
#include <string>   // untuk menggunakan string
using namespace std;

int main() {
    int tanggal = 15;
    int tahun = 2023;

    // jangan lupa bahwa string perlu diapit dengan kutip dua
    string bulan = "Februari";// ketikan Februari sesuai perintah soal 

    // cetak kata sandi
    cout << (tahun + 10) << "-" << bulan << "-" << (tanggal + 7) << endl; //ketikan [tahun+10]-[bulan]-[tanggal+7] sesuai perintah soal
}
