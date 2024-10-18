//Petunjuk
//Carilah fungsi anggota dari std::string di sini yang dapat membantu Anda menyelesaikan soal ini.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T; // Membaca input S dan T

    // Selama T ada dalam S
    while (S.find(T) != string::npos) {
        // Menghapus kemunculan terkiri dari T pada S
        S.erase(S.find(T), T.length());
    }

    // Mencetak hasil
    cout << S << endl;

    return 0;
}
