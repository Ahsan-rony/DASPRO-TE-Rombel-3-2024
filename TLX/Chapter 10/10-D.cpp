/*
Soal Praktik

Berikut adalah modifikasi dari program di atas, 
yang menggunakan cin agar nilai dari variabel n dan m dibaca dari "masukan"(bukan langsung diinisialisasi menjadi 10 dan 20).
*/
//Buatlah sebuah berkas bernama faktorial.cpp yang berisi kode berikut://

long long faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return faktorial(n - 1) * n;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << faktorial(n) + faktorial(m) << endl;
}
//Lalu, kompilasilah kode sumber berikut, menjadi sebuah program executable bernama faktorial (/ faktorial.exe).//
/*
1.Jalankanlah program executable tersebut. Apakah keluarannya?
Jawaban yang tepat adalah tidak ada keluaran apapun. Karena Untuk hal ini, kita bisa menggunakan std::cin untuk membaca masukan.
jadi sebelum kita belum input data apapun takkan terjalankan codingan tersebut.
2.Pastikan program di atas masih berjalan!
Sekarang, ketikkan
10 20
(yakni, 10, spasi, 20), lalu tekan Enter. Apakah keluarannya?
Jawaban yang tepat adalah 2432902008180268800
Coding berjalan berarti standard character input sudah terisi dengan benar.
3.Pastikan eksekusi program di atas telah berhenti.
Sekarang, jalankan lagi executable tersebut. Setelah itu, kali ini, ketikkan
15
17
(yakni, 15, Enter, 17, Enter). Apakah keluarannya?
Jawaban yang tepat adalah 356995102464000
Coding berjalan berarti standard character input sudah terisi dengan benar.

*/
