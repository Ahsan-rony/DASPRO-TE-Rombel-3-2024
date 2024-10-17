#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

// Struktur data untuk menyimpan informasi karung beras
struct Beras {
    double harga_per_kg; // Harga per kilogram
    int berat; // Berat karung
    int harga; // Harga karung
};

// Fungsi pembanding untuk mengurutkan berdasarkan harga per kilogram
bool compare(Beras a, Beras b) {
    return a.harga_per_kg > b.harga_per_kg;
}

double maksimum_biaya(int N, int X, vector<Beras> &karung) {
    // Urutkan karung berdasarkan harga per kilogram secara menurun
    sort(karung.begin(), karung.end(), compare);
    
    double total_biaya = 0.0;
    int kapasitas_sisa = X;

    // Iterasi melalui semua karung
    for (int i = 0; i < N; i++) {
        if (kapasitas_sisa == 0) break; // Jika keranjang sudah penuh, hentikan

        if (karung[i].berat <= kapasitas_sisa) {
            // Jika masih ada cukup kapasitas untuk membeli seluruh karung
            total_biaya += karung[i].harga; // Beli seluruh karung
            kapasitas_sisa -= karung[i].berat;
        } else {
            // Jika kapasitas tidak cukup untuk seluruh karung, beli sebagian
            total_biaya += (karung[i].harga_per_kg * kapasitas_sisa);
            kapasitas_sisa = 0;
        }
    }

    return total_biaya;
}

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<Beras> karung(N);
    
    for (int i = 0; i < N; i++) {
        cin >> karung[i].berat; // Input berat
    }
    
    for (int i = 0; i < N; i++) {
        cin >> karung[i].harga; // Input harga
        karung[i].harga_per_kg = (double)karung[i].harga / karung[i].berat; // Hitung harga per kg
    }
    
    // Hitung dan keluarkan biaya maksimal
    double hasil = maksimum_biaya(N, X, karung);
    
    // Tampilkan hasil dengan 5 angka di belakang koma
    cout << fixed << setprecision(5) << hasil << endl;

    return 0;
}
