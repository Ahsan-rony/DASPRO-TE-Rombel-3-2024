//Soal
//Perbaikilah fungsi cetak_menurun() di sebelah kanan dengan melengkapi kasus dasarnya. Lalu, gunakan fungsi tersebut untuk mencetak seluruh bilangan bulat positif dari 
//10
//10 hingga 
//1
//1, satu bilangan setiap barisnya.

#include <iostream>
using namespace std;

void cetak_menurun(int n) {
    
    if (n <= 0){
        return;
    }
    cout << n << endl;
    
    
    cetak_menurun(n - 1);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cetak_menurun(10);
}
