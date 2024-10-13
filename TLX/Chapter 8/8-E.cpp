#include <iostream>
#include <vector>
using namespace std;

vector<int> jumlah_bersebelahan(vector<int> v) {
    vector<int> hasil;  // Vektor untuk menyimpan hasil

    // Iterasi melalui elemen-elemen v dan menjumlahkan elemen bersebelahan
    for (int i = 0; i < v.size() - 1; ++i) {
        hasil.push_back(v[i] + v[i + 1]);
    }

    return hasil;  // Mengembalikan vektor hasil
}

// Fungsi cetak_vector() dan main() di bawah tidak boleh diubah!

void cetak_vector(vector<int> v) {
    cout << "vector:";
    for (int x : v) {
        cout << " " << x;
    }
    cout << endl;
}

int main() {
    cetak_vector(jumlah_bersebelahan({1, 2, 3, 4, 5}));
    cetak_vector(jumlah_bersebelahan({17, 8, 1945}));

    return 0;
}
