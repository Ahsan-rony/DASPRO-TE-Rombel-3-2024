/* Soal
Pak Dengklek menemukan sebuah koran lama. Pada halaman pertama, terdapat artikel yang bertuliskan:
lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.
Pak Dengklek meminta Anda untuk mencetak sebuah baris berisi seluruh karakter dari karakter ke-33 sampai dengan ke-40. Bantulah Pak Dengklek! Pak Dengklek memberikan petunjuk: Anda dapat memanfaatkan fungsi anggota substr().
Perhatikan bahwa pada C++, indeks karakter pada string dimulai dari 0, sehingga karakter ke-33 ada pada indeks nomor 32.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    // Menggunakan substr untuk mengambil karakter dari indeks 32 hingga 39
    cout << s.substr(32, 8) << endl; // 8 adalah jumlah karakter yang diambil

    return 0;
}
 
