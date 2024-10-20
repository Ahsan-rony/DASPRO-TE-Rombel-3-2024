/* Materi
Sekarang, kita akan mempelajari lebih lanjut makna dari perintah berikut:

std::cout << "Halo, dunia!" << std::endl;
std::cout (singkatan dari "character output") akan mencetak nilai-nilai yang berada setelahnya.
Setiap nilai yang ingin dicetak harus didahului dengan operator <<.
Terdapat dua nilai yang dicetak:
String "Halo, dunia", menyatakan teks Halo, dunia!.
String harus diapit dengan tanda kutip dua (").
std::endl (singkatan dari "end of line"), menandakan akhir dari baris.
Mirip dengan Enter pada keyboard.
; menandakan akhir dari sebuah perintah.
Soal
Kali ini, Pak Dengklek meminta Anda untuk mencetak keluaran berikut:

Halo, dunia!
Aku semangat belajar C++!
Lengkapilah program di sebelah kanan agar menghasilkan keluaran tersebut! */

#include <iostream>

int main() {
    std::cout << "Halo, dunia!" << std::endl;
      std::cout << "Aku semangat belajar C++!" << std::endl;
}

