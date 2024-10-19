#include <iostream>
#include <string>
using namespace std;

bool palindrom(string s) {
    if (s.length() <= 1) {
        return true;
    }

    if (s[0] != s[s.length() - 1]) {
        return false;
    }

    return palindrom(s.substr(1, s.length() - 2));
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << palindrom("") << endl;
    cout << palindrom("x") << endl;
    cout << palindrom("aa") << endl;
    cout << palindrom("ab") << endl;
    cout << palindrom("ini") << endl;
    cout << palindrom("itu") << endl;
    cout << palindrom("anna") << endl;
    cout << palindrom("ibu ratna antar ubi") << endl;
    cout << palindrom("rumah murah") << endl;
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
}
