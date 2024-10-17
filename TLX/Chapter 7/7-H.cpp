#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    // Menggunakan substr untuk mengambil karakter dari indeks 32 hingga 39
    cout << s.substr(32, 8) << endl; // 8 adalah jumlah karakter yang diambil

    return 0;
}
 