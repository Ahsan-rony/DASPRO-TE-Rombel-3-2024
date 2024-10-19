#include <iostream>
#include <vector>
using namespace std;

vector<int> jumlah_bersebelahan(vector<int> v) {
    vector<int> hasil; // Vektor untuk menyimpan hasil

    // Loop untuk menghitung jumlah elemen bersebelahan
    for (int i = 0; i < v.size() - 1; i++) {
        hasil.push_back(v[i] + v[i + 1]); // Menjumlahkan elemen bersebelahan
    }

    return hasil; // Mengembalikan vektor hasil
}

// Fungsi untuk memeriksa hasil
bool periksa_hasil(vector<int> hasil, vector<int> expected) {
    if (hasil.size() != expected.size()) return false; // Ukuran tidak sama
    
    for (int i = 0; i < hasil.size(); i++) {
        if (hasil[i] != expected[i]) return false; // Elemen tidak sama
    }
    return true; // Semua elemen sama
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
    vector<int> hasil1 = jumlah_bersebelahan({1, 2, 3, 4, 5});
    vector<int> hasil2 = jumlah_bersebelahan({17, 8, 1945});
    
    cetak_vector(hasil1);
    cetak_vector(hasil2);

    // Memeriksa hasil
    bool validasi1 = periksa_hasil(hasil1, {3, 5, 7, 9}); // Mengharapkan {3, 5, 7, 9}
    bool validasi2 = periksa_hasil(hasil2, {25, 1953});   // Mengharapkan {25, 1953}

    cout << (validasi1 ? "Hasil 1 valid" : "Hasil 1 tidak valid") << endl;
    cout << (validasi2 ? "Hasil 2 valid" : "Hasil 2 tidak valid") << endl;

    return 0;
}
