#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    long long total_sum = 0;

    // Membaca input dan menghitung total jumlah
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total_sum += A[i];
    }

    // Mengeluarkan hasil jumlah kecuali A[i]
    for (int i = 0; i < N; i++) {
        cout << total_sum - A[i] << endl;
    }

    return 0;
}
