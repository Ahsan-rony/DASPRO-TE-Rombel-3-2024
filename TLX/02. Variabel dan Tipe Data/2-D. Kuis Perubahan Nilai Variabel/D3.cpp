/*Apakah keluaran dari program berikut?*/
ele#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = 4;
  // int merupakan singkatan dari integer, yaitu tipe data yang digunakan untuk merepresentasikan bilangan bulat (tanpa desimal) //
    x = y;
    y = x;
    cout << x << " " << y << endl;   
}
//keluaran dari program tersebut adalah 4 4 karena x pada baris ke-10 bernilai 4 dan y bernilai 4,
kemudian penjelasan lebih lanjut x pada baris ke-9 = y yaitu 4,kemudian y pada baris ke-10 y = x yaitu 4,
karena pada baris ke-10 nilai x nya telah diperbarui menjadi bernilai 4, bukan 3 lagi 
Maka hasil / (cout) variabel x y bernilai 4 4//
