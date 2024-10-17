 #include <iostream>

using namespace std;

// Fungsi untuk menggambar pegunungan tingkat N
void drawMountains(int N) {
    if (N == 1) {
        cout << "*" << endl; // Pegunungan tingkat 1
        return;
    }
    
    // Menggambar pegunungan tingkat N-1
    drawMountains(N - 1);
    
    // Menggambar baris yang berisi N karakter *
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;

    // Menggambar lagi pegunungan tingkat N-1
    drawMountains(N - 1);
}

int main() {
    int N;
    cin >> N; // Membaca tingkat pegunungan
    drawMountains(N); // Menggambar pegunungan
    return 0;
}

