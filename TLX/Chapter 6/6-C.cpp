#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fungsi untuk menghitung maksimum bebek yang bisa dibuat senang
long long maksimum_bebek(int N, long long D, vector<pair<long long, long long>> &data) {
    // Urutkan cokelat berdasarkan harga (H_i)
    sort(data.begin(), data.end());

    long long bebek_senang = 0;  // Jumlah bebek yang bisa dibuat senang

    // Iterasi melalui semua jenis cokelat
    for (int i = 0; i < N; i++) {
        long long harga = data[i].first;
        long long bebek = data[i].second;

        // Hitung berapa banyak cokelat yang bisa dibeli
        long long maksimal_cokelat = min(bebek, D / harga);
        bebek_senang += maksimal_cokelat;
        D -= maksimal_cokelat * harga;

        // Jika anggaran habis, hentikan pembelian
        if (D <= 0) {
            break;
        }
    }

    return bebek_senang;
}

int main() {
    int N;
    long long D;
    cin >> N >> D;

    vector<pair<long long, long long>> data(N);

    // Input harga dan jumlah bebek untuk tiap jenis cokelat
    for (int i = 0; i < N; i++) {
        cin >> data[i].first >> data[i].second;
    }

    // Output hasil
    cout << maksimum_bebek(N, D, data) << endl;

    return 0;
}


