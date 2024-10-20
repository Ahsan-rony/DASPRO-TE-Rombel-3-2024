#include <iostream>

int main() {
    int angka;

    std::cout << "Masukkan angka: ";
    std::cin >> angka;

    if (angka > 0) {  // Kondisi 1: Cek jika angka genap
        std::cout << "Angka positif." << std::endl;
    } else {
        // Jika angka tidak genap, periksa kondisi lain
        if (angka < 0) {  // Kondisi 2: Cek jika angka negatif
            std::cout << "Angka negatif." << std::endl;
        } else {
            std::cout << "Angka adalah nol." << std::endl;
        }
    }

    return 0;
}
