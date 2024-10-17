//Soal ini (hampir) sama persis dengan soal sebelumnya. Bedanya, sekarang terdapat informasi Batasan.
//Program Anda diharapkan untuk bisa menerima masukan apapun yang memenuhi batasan-batasan yang dimaksud. 
//Program Anda tidak hanya akan menerima satu buah masukan saja, namun bisa banyak!

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Menghitung total semua bilangan bulat
    long long total = 0;  // Menggunakan long long untuk menghindari overflow
    for (int i = 0; i < N; ++i) {
        total += A[i];
    }
    
    // Mencetak hasil untuk setiap Ai
    for (int i = 0; i < N; ++i) {
        cout << (total - A[i]) << "\n";
    }
    
    return 0;
}

//penjelasan
//#include <iostream>: Digunakan untuk input dan output di C++.
//#include <vector>: Digunakan untuk menggunakan tipe data vector, yang merupakan array dinamis.
//using namespace std;Memungkinkan penggunaan elemen dari namespace std tanpa perlu menuliskan std:: setiap kali.
//int main() {Titik awal eksekusi program.
//Mendeklarasikan variabel N untuk menyimpan jumlah elemen yang akan dibaca dari input.
// cin >> N;: Membaca nilai N dari input.
//Mendeklarasikan vektor A dengan ukuran N untuk menyimpan N bilangan bulat.
//Menggunakan loop for untuk membaca N bilangan bulat dari input dan menyimpannya di vektor A
//Mendeklarasikan variabel total bertipe long long untuk menyimpan jumlah total dari semua elemen di vektor A, agar dapat menangani nilai besar dan menghindari overflow.
//Menggunakan loop for untuk menambahkan setiap elemen dari A ke total.
//Menggunakan loop for lagi untuk mencetak hasil untuk setiap elemen A[i].
//Untuk setiap elemen A[i], mencetak total - A[i], yang memberikan jumlah dari semua elemen kecuali A[i].
