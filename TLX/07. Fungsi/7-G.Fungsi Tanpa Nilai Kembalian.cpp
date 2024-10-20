/* Soal
Pak Dengklek memiliki 10 kandang bebek, dinomori dari 1 hingga 10. Pada mulanya, seluruh kandangnya kosong.
Pak Dengklek kemudian mengisi kandang-kandang bebeknya, sebagai berikut:
•	Kandang nomor 1 hingga 8, masing-masing diisi 2 ekor bebek.
•	Kandang nomor 2 hingga 9, masing-masing diisi 10 ekor bebek.
•	Kandang nomor 5 hingga 6, masing-masing diisi 1 ekor bebek.
•	Kandang nomor 9 hingga 10, masing-masing diisi 3 ekor bebek.
•	Kandang nomor 1 hingga 4, masing-masing diisi 7 ekor bebek.
•	Kandang nomor 1 hingga 4, masing-masing diisi 2 ekor bebek.
•	Kandang nomor 4 hingga 8, masing-masing diisi 6 ekor bebek.
Setelah seluruh proses di atas berakhir, Pak Dengklek mengunjungi kandang yang berisi bebek terbanyak. Ada berapakah bebek di kandang tersebut?
Lengkapilah program di sebelah kanan agar mengeluarkan banyaknya bebek yang dimaksud. Anda diminta untuk menuliskan fungsi isi_bebek_ke_dalam_kandang() yang menerima 3 parameter:
1.	nomor kandang awal
2.	nomor kandang akhir
3.	banyaknya bebek yang diisi ke dalam kandang-kandang tersebut
Fungsi ini tidak perlu mengembalikan nilai apapun. */


#include <iostream>
using namespace std;

int total_kandang = 10;

// bebek[i] menyatakan banyaknya bebek pada kandang nomor i.
int bebek[11];

void kosongkan_kandang() {
    for (int i = 1; i <= total_kandang; i++) {
        bebek[i] = 0; // Mengosongkan semua kandang
    }
}

// Fungsi untuk mengisi bebek ke dalam kandang
void isi_bebek_ke_dalam_kandang(int nomor_awal, int nomor_akhir, int jumlah) {
    for (int i = nomor_awal; i <= nomor_akhir; i++) {
        bebek[i] += jumlah; // Menambahkan jumlah bebek ke dalam kandang
    }
}

int bebek_terbanyak_dalam_suatu_kandang() {
    int bebek_terbanyak = bebek[1]; // Menginisialisasi dengan jumlah bebek di kandang 1
    for (int i = 2; i <= total_kandang; i++) {
        bebek_terbanyak = max(bebek_terbanyak, bebek[i]); // Mencari jumlah bebek terbanyak
    }
    return bebek_terbanyak; // Mengembalikan jumlah bebek terbanyak
}

int main() {
    kosongkan_kandang(); // Mengosongkan kandang

    // Mengisi kandang sesuai ketentuan
    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 1);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    // Mencetak jumlah bebek terbanyak di dalam kandang
    cout << bebek_terbanyak_dalam_suatu_kandang() << endl;

    return 0;
} 
