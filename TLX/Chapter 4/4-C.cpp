/* Pak Dengklek memiliki 67 bebek jantan dan 98 bebek betina. Ia ingin menggiring bebek-bebeknya ke sawah. Bebek-bebeknya akan dibariskan dua-dua, tidak peduli dengan jenis kelaminnya (jantan maupun betina). Oleh karena itu, Pak Dengklek ingin mengetahui apakah total banyaknya bebek adalah bilangan genap atau ganjil.
Bantulah Pak Dengklek menentukan hal tersebut, dengan cara melengkapi program di sebelah kanan. Program tersebut harus mengeluarkan salah satu dari kedua baris berikut, yakni baris yang menyatakan hal yang benar: */
// total banyaknya bebek adalah bilangan genap
// total banyaknya bebek adalah bilangan ganjil

#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;

    if (total_bebek % 2 == 0) {
        cout << "total banyaknya bebek adalah bilangan genap" << endl;
    } else {
        cout << "total banyaknya bebek adalah bilangan ganjil" <<endl;
    }
}
