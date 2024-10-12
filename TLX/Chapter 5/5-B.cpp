// Pak Dengklek memiliki kandang-kandang persegi, dengan panjang sisinya adalah setiap bilangan bulat antara 121 sampai dengan 125 (inklusif). Ia ingin menjual satu (atau lebih) kandang yang memenuhi syarat berikut:
// - panjang sisinya kelipatan 2, namun
// - panjang sisinya bukan kelipatan 3.
// Apakah ada kandang yang dijual? Lengkapilah program di sebelah kanan, agar mengeluarkan sebuah baris berisi:
// - ada, apabila ada kandang yang dijual, atau
// - tidak ada, apabila tidak ada.

#include <iostream> // Menyertakan library input-output standar C++
using namespace std; // Memungkinkan penggunaan elemen dari namespace std tanpa prefiks 'std::'

int main() { // Fungsi utama tempat eksekusi program dimulai
    bool ada_yang_dijual = false; // Variabel untuk menandai jika ada yang dijual, diinisialisasi dengan false

    for (int sisi = 121; sisi <= 125; sisi++) { // Loop dari 121 hingga 125
        bool kelipatan_2 = sisi % 2 == 0; // Memeriksa apakah 'sisi' adalah kelipatan 2
        bool kelipatan_3 = sisi % 3 == 0; // Memeriksa apakah 'sisi' adalah kelipatan 3

        if (kelipatan_2 && !kelipatan_3) { // Jika 'sisi' kelipatan 2 dan bukan kelipatan 3
            ada_yang_dijual = true; // Set variabel 'ada_yang_dijual' menjadi true
        }
    }

    if (ada_yang_dijual) { // Memeriksa nilai 'ada_yang_dijual'
        cout << "ada" << endl; // Jika true, cetak "ada"
    } else {
        cout << "tidak ada" << endl; // Jika false, cetak "tidak ada"
    }
}
// keluaran yang tercetak adalah "ada"
