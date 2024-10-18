 #include <iostream>
using namespace std;

int main() {
    int N = 10;     // Deklarasi variabel 'N' dengan nilai awal (misalkan N = 10)
    int val = N;    // Inisialisasi variabel 'val' dengan nilai 'N'

    // Perulangan while yang membagi val dengan 3 hingga nilainya <= 0
    while (val > 0) {
        val /= 3; // Setara dengan "val = val / 3"
        cout << "val: " << val << endl; // Opsional: cetak nilai val pada setiap iterasi
    }

    return 0;
}
