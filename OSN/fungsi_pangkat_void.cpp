#include <iostream>
using namespace std;

void pangkat(int a, int b, int &hasil) {
    hasil = 1;
    for (int i = 0; i < b; i++) {
        hasil *= a;
    }
}

int main() {
    int a, b, hasil;

    cout << "Masukkan bilangan (a): ";
    cin >> a;
    cout << "Masukkan pangkat (b): ";
    cin >> b;

    if (b < 0) {
        cout << "Pangkat tidak boleh negatif." << endl;
        return 1; // keluar dari program jika b negatif
    }

    pangkat(a, b, hasil);
    cout << a << "^" << b << " = " << hasil << endl;

    return 0;
}
