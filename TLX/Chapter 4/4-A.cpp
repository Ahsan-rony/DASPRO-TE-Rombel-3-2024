//1. Apakah keluaran dari program berikut?
#include <iostream>
using namespace std;

int main() {
    int x = 1 + 2 + 3 + 4;

    if (x == 10) {
        cout << "nilai x adalah 10" << endl;
    }
}
//a. nilai x adalah 10

//2. Apakah keluaran dari program berikut?
#include <iostream>
using namespace std;

int main() {
    int x = 1;
    x *= 2;

    if (x == 3) {
        cout << "nilai x adalah 3" << endl;
    }
}
//b. tidak ada keluaran yang dihasilkan

//3. Apakah keluaran dari program berikut?
#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if (x > 10) {
        cout << "nilai x lebih dari 10" << endl;
    }
    if (x <= 10) {
        cout << "nilai x kurang dari atau sama dengan 10" << endl;
    }
    if (x >= 9) {
        cout << "nilai x lebih dari atau sama dengan 9" << endl;
    }
}
// nilai x kurang dari atau sama dengan 10
// nilai x lebih dari atau sama dengan 9
