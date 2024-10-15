#include <iostream>
using namespace std;

int main() {
    // Jumlah bebek jantan dan betina yang dibeli setiap hari
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    // Total biaya per hari
    int totalBiaya[4];

    // Menghitung total biaya untuk setiap hari
    for (int i = 0; i < 4; i++) {
        int biayaJantan = 0, biayaBetina = 0;

        // Menghitung biaya untuk bebek jantan
        if (jantan[i] < 10) {
            biayaJantan = jantan[i] * 100000;
        } else if (jantan[i] >= 10 && jantan[i] <= 50) {
            biayaJantan = jantan[i] * 75000;
        } else {
            biayaJantan = jantan[i] * 50000;
        }

        // Menghitung biaya untuk bebek betina
        if (betina[i] < 10) {
            biayaBetina = betina[i] * 100000;
        } else if (betina[i] >= 10 && betina[i] <= 50) {
            biayaBetina = betina[i] * 75000;
        } else {
            biayaBetina = betina[i] * 50000;
        }

        // Menghitung total biaya untuk hari ke-i
        totalBiaya[i] = biayaJantan + biayaBetina;
        cout << totalBiaya[i] << endl; // Mencetak total biaya hari ke-i
    }

    return 0; // Mengembalikan 0 menandakan program selesai
}
