#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+') {
        long long total = 0;
        for (string s : data) {
            total += stoi(s); 
        }
        return to_string(total);
    }

    else if (op == '*') {
        long long total = 1;
        for (string s : data) {
            total *= stoi(s);
        }
        return to_string(total);
    }
    return "KESALAHAN";
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
