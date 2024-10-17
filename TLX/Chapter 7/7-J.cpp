#include <iostream>
using namespace std;

void tukar(int& a, int& b) {  // Menggunakan referensi
    int temp = a;   // Menyimpan nilai a ke variabel sementara
    a = b;          // Mengubah nilai a menjadi nilai b
    b = temp;       // Mengubah nilai b menjadi nilai a (yang disimpan di temp)
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    int p = 10, q = 20, r = 30;
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(p, q);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(q, r);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;
}

/*
Penjelasan:
1. Program ini mendefinisikan fungsi 'tukar' yang bertugas menukar dua nilai variabel, menggunakan pass by reference. Parameter 'a' dan 'b' menggunakan '&', artinya referensi langsung ke variabel yang dikirimkan dari main.
   
2. Di dalam fungsi 'tukar', sebuah variabel sementara 'temp' digunakan untuk menyimpan nilai variabel 'a'. Kemudian nilai 'a' diganti dengan nilai 'b', dan nilai 'b' diganti dengan nilai yang disimpan di 'temp', sehingga pertukaran selesai.

3. Pada fungsi main:
   - Awalnya, variabel p = 10, q = 20, dan r = 30 dicetak ke layar.
   - Kemudian, 'tukar(p, q)' dipanggil, yang akan menukar nilai p dengan q. Setelah pertukaran, p = 20 dan q = 10.
   - Selanjutnya, 'tukar(q, r)' dipanggil, yang menukar nilai q dengan r. Setelah pertukaran, q = 30 dan r = 10.

4. Output:
   a. Pada baris pertama, hasilnya: p = 10, q = 20, r = 30.
   b. Setelah tukar(p, q), hasilnya: p = 20, q = 10, r = 30.
   c. Setelah tukar(q, r), hasilnya: p = 20, q = 30, r = 10.

Kesimpulan: Program ini berhasil menukar nilai antara variabel dengan menggunakan referensi, dan nilai asli variabel yang ditukar di dalam fungsi 'tukar' langsung berubah.
*/
