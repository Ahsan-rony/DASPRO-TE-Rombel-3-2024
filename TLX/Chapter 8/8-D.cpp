

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        // Mengubah setiap karakter menjadi huruf kapital
        c = toupper(c);

        // Mengubah karakter menjadi karakter selanjutnya
        if (c == 'Z') {
            c = 'A';  // Jika Z, ubah menjadi A
        } else {
            c = c + 1;  // Karakter selanjutnya
        }

        cout << c;
    }
    cout << endl;

    return 0;
}
