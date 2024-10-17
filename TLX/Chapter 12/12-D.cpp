#include <iostream>  
#include <vector>

using namespace std;                                                  

/*
contoh masukan : 
2 3 4
1 1 1
1 1 2
1 1 1 1
1 1 1 1
1 1 1 2
*/

int main() {
    // Input ukuran matriks N, M, P
    int N, M, P;
    cin >> N >> M >> P;

    // Input matriks A berukuran N x M
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    // Input matriks B berukuran M x P
    vector<vector<int>> B(M, vector<int>(P));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < P; ++j) {
            cin >> B[i][j];
        }
    }

    // Matriks hasil perkalian C berukuran N x P
    vector<vector<int>> C(N, vector<int>(P, 0));

    // Menghitung hasil perkalian matriks A dan B
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < P; ++j) {
            for (int k = 0; k < M; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Cetak hasil matriks C
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < P; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
