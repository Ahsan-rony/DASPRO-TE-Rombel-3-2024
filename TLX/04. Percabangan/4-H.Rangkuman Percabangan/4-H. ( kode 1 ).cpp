#include <iostream>

int main() {
    int angka;

    std::cout << "Masukkan angka: ";
    std::cin >> angka;

    if (angka > 0) {
        std::cout << "Angka positif." << std::endl;
    } else if (angka < 0) {
        std::cout << "Angka negatif." << std::endl;
    } else {
        std::cout << "Angka adalah nol." << std::endl;
    }

    return 0;
}
