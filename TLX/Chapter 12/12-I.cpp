#include <iostream>
#include <string>

std::string caesarCipher(const std::string& input, int k) {
    std::string result = "";

    for (char c : input) {
        // Pastikan hanya karakter a-z yang diproses
        if (c >= 'a' && c <= 'z') {
            // Hitung posisi baru dengan modul untuk siklus
            char newChar = 'a' + (c - 'a' + k) % 26;
            result += newChar;
        } else {
            // Jika bukan karakter a-z, tambahkan seperti aslinya
            result += c;
        }
    }
    
    return result;
}

int main() {
    std::string S = "zebra";
    int k = 5;

    std::string encrypted = caesarCipher(S, k);
    std::cout << "String setelah enkripsi: " << encrypted << std::endl;

    return 0;
}
