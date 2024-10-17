#include <iostream>
#include <limits>

int main() {
    int N;
    std::cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int maxNum = std::numeric_limits<int>::min(); // Inisialisasi maxNum dengan nilai minimum int
    int minNum = std::numeric_limits<int>::max(); // Inisialisasi minNum dengan nilai maksimum int

    for (int i = 0; i < N; i++) {
        if (A[i] > maxNum) {
            maxNum = A[i]; // Mencari bilangan terbesar
        }
        if (A[i] < minNum) {
            minNum = A[i]; // Mencari bilangan terkecil
        }
    }

    std::cout << maxNum << " " << minNum << std::endl; // Mengeluarkan hasil

    return 0;
}

// penjelasan 
//Penjelasan Program:
//Input: Program dimulai dengan membaca jumlah elemen N dan kemudian membaca N bilangan bulat ke dalam array A.
//Inisialisasi: maxNum diinisialisasi dengan nilai terkecil yang mungkin (std::numeric_limits<int>::min()), dan minNum diinisialisasi dengan nilai terbesar yang mungkin (std::numeric_limits<int>::max()).
//Pencarian: Program melakukan iterasi melalui array untuk menemukan nilai maksimum dan minimum.
//Output: Akhirnya, program mencetak bilangan terbesar dan terkecil dalam format yang diinginkan
