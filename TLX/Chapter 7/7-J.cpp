#include <iostream>
using namespace std;

void kali_dua(int n) {
    n *= 2;
}

int main() {
    int a = 10;
    kali_dua(a);
    cout << a << endl;
}

/*
Penjelasan:
1. Program ini bertujuan untuk menggandakan nilai variabel 'a' dengan memanggil fungsi 'kali_dua'.
2. Fungsi 'kali_dua' memiliki parameter 'n' yang bertipe integer. Namun, parameter ini adalah pass by value, artinya hanya salinan dari variabel 'a' yang dipassing ke fungsi.
3. Di dalam fungsi 'kali_dua', nilai 'n' dikalikan 2, tetapi karena yang diubah adalah salinan, nilai asli 'a' di fungsi main tidak terpengaruh.
4. Setelah memanggil 'kali_dua(a)', nilai 'a' di fungsi main tetap 10.
5. 'cout' menampilkan nilai 'a', sehingga output program adalah 10.

Catatan: Jika ingin agar fungsi mengubah nilai asli 'a', gunakan pass by reference dengan mengganti parameter 'int n' menjadi 'int& n'.
*/
