/* Pak Dengklek memiliki 67 bebek jantan dan 98 bebek betina. Ia ingin memasukkan bebek-bebeknya ke dalam kandang-kandang, sedemikian sehingga setiap kandang terisi penuh dan berisi banyaknya bebek yang sama. Dengan kata lain, total banyaknya bebek harus merupakan kelipatan dari kapasitas kandang.
Pak Dengklek pergi ke toko yang menjual kandang-kandang dengan lima jenis kapasitas: 
1 bebek, 3 bebek, 5 bebek, 11 bebek, dan 13 bebek. Ia ingin membeli satu jenis kandang saja. Kapasitas kandang terbesar manakah yang mungkin Pak Dengklek beli?
Buatlah program yang mengeluarkan kapasitas kandang tersebut. */

#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98; // Total jumlah bebek

    // Kondisi if-else untuk mencari kapasitas kandang terbesar yang bisa digunakan
    if (total_bebek % 13 == 0) {
        cout << 13 << endl;
    } else if (total_bebek % 11 == 0) {
        cout << 11 << endl;              //yang dicari adalah angka yang paling besar dan bila digunakan untuk membagi total_bebek hasilnya tidak berkoma 
    } else if (total_bebek % 5 == 0) {
        cout << 5 << endl;
    } else if (total_bebek % 3 == 0) {
        cout << 3 << endl;
    } else {
        cout << 1 <<endl;
        
    }

}
