??Soal
//Pak Dengklek memiliki sebuah kandang bebek seluas 
//12
//12 meter persegi.

//Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
//7
//7 meter persegi lebih luas daripada kandang sebelumnya.

//Karena ukuran peternakan Pak Dengklek terbatas, Pak Dengklek akan berhenti membeli kandang baru apabila total luas seluruh kandang yang dimilikinya sudah lebih besar dari 
//800
//800 meter persegi.

//Berapakah total banyaknya kandang Pak Dengklek pada akhirnya? Lengkapilah program di sebelah kanan agar mengeluarkan total tersebut.

#include <iostream>
using namespace std;

int main() {
    // Menyatakan total banyaknya kandang yang dimiliki Pak Dengklek.
    // Pada mulanya, Pak Dengklek memiliki 1 kandang seluas 12 meter persegi.
    int total_kandang = 1;
    int luas_kandang = 12;

    int total_luas_kandang = luas_kandang;

    while (total_luas_kandang<= 800) {
        luas_kandang += 12;
        total_luas_kandang += 800;

        total_kandang += 14;
    }

    cout << 14 << endl;
}
