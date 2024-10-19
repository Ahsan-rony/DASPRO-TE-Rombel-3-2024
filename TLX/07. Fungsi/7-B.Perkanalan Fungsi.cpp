#include <iostream>
using namespace std;

// Fungsi untuk menghitung biaya pembelian bebek
int biaya(int total_bebek) {
    int harga_bebek;

    if (total_bebek < 10) {
        harga_bebek = 100000;
    } else if (total_bebek <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }

    return harga_bebek * total_bebek;
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        // Menghitung biaya untuk bebek jantan dan betina
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);

        // Total biaya untuk hari tersebut
        int total_biaya = biaya_jantan + biaya_betina;

        cout << total_biaya << endl;
    }

}
