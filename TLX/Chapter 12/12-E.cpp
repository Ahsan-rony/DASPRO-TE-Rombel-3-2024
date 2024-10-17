#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<pair<int, int>> murid(N);
    for (int i = 0; i < N; ++i) {
        cin >> murid[i].first >> murid[i].second; // X, Y
    }

    int min_tingkat = numeric_limits<int>::max();
    int max_tingkat = numeric_limits<int>::min();

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            // Hitung tingkat kedekatan Ti,j
            int T = (int)(pow(abs(murid[j].first - murid[i].first), D) + pow(abs(murid[j].second - murid[i].second), D));

            // Update min dan max
            min_tingkat = min(min_tingkat, T);
            max_tingkat = max(max_tingkat, T);
        }
    }

    cout << min_tingkat << " " << max_tingkat << endl;

}

