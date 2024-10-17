#include <iostream>

char c1, c2, c3;
int bil;

int main() {
    // Menggunakan cin dan cout untuk lebih konsisten
    std::cout << "Masukkan dua karakter dan sebuah bilangan bulat: ";
    std::cin >> c1 >> c2 >> bil;
    std::cout << "Masukkan satu karakter tambahan: ";
    std::cin >> c3;

    std::cout << "c1='" << c1 << "' c2='" << c2 << "' bil=" << bil << " c3='" << c3 << "'" << std::endl;

    return 0;
}
