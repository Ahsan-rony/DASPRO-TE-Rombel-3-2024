// soal
// Pak Dengklek ingin membariskan N bebeknya ke dalam sebuah formasi dengan r baris dan c kolom, di mana r ≤ c dan r × c = N. 
// Tugas Anda adalah menentukan pasangan nilai r dan c yang mungkin. 
// Jika ada lebih dari satu kemungkinan pasangan, pilih pasangan yang memiliki selisih antara r dan c terkecil.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int r_terbaik = 1;
    int c_terbaik = N;

    for (int r = 1; r <= sqrt(N); r++) {
        if (N % r == 0) { // cek apakah r adalah faktor dari N
            int c = N / r; // hitung c
            if (r <= c) { // pastikan r <= c
                // cek jika selisihnya lebih kecil
                if ((c - r) < (c_terbaik - r_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }

    cout << r_terbaik << " " << c_terbaik << endl;
    return 0;
} 

  //jawaban
  // Soal ini mengharuskan kita mencari pasangan r dan c dari N bebek, dengan syarat r × c = N dan r ≤ c.
  // Metode penyelesaian melibatkan iterasi nilai r dan menghitung c, sambil memilih pasangan dengan selisih terkecil antara r dan c. 
  // Dengan kompleksitas O(N²), algoritma ini efisien untuk N hingga 3000, memastikan solusi dapat ditemukan dalam batas waktu yang ditentukan.




