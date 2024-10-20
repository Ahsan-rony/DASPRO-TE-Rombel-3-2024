//1. Apakah keluaran dari potongan program berikut?

#include <iostream>

int main() {
    int data[10] = {1, 1, 3, 4, 3, 3, 3, 9, 1, 9};
    int hasil = 0;

    for (int i = 0; i < 9; i++) {
        if (data[i] == data[i + 1]) {
            hasil++;
        }
    }

    std::cout << hasil << std::endl;

    return 0;
}

// jawbannya 3
