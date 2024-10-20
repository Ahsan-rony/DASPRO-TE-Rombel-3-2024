//Berapa kalikah tanda bintang tercetak oleh program berikut?//

#include <iostream>
using namespace std;

int main() {
    if (1 + 1 == 2) {
    //if menyatakan kondisi 1 + 1 == 2 adalah benar (true), karena memang hasil dari 1 + 1 adalah 2.//
        cout << "*" << endl;
        /* Karena kondisi if bernilai benar, perintah di dalam blok if akan dieksekusi.
        Program akan mencetak tanda bintang (*) dan pindah ke baris baru (endl). */
        return 0;
        /* Setelah perintah return 0; dijalankan, fungsi akan langsung berakhir.
        Oleh karena itu, hanya ada satu bintang yang tercetak. */
    }
    cout << "*" << endl;
}

/* Keluaran dari program code tersebut hanya bintang satu saja dan baris selanjutnya tidak akan pernah dieksekusi karena 
program sudah dihentikan oleh return 0; pada baris sebelumnya. Jadi, tanda bintang kedua tidak akan dicetak. */
