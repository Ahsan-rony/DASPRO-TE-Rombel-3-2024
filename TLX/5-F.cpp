//Bebek-bebek Pak Dengklek senang mengirimkan pesan misterius.
//Bebek ke-1 mengirimkan pesan berikut:

#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N) {
                // jika baris atau kolom saat ini adalah yang pertama atau terakhir, cetak bintang
                cout << "*";
            } else {
                // selain itu, cetak titik
                cout << ".";
            }
        }
        cout << endl;
    }
    
    return 0;
}

//melakukan pencetakan dari 1 hingga 10 untuk setiap kolom dan setiap bintang menandakan tepi kotak, sedangkan titik menandakan area di dalam kotak.
