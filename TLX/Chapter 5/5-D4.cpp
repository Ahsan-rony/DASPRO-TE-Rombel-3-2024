/*4.Berapa buah bintang yang dicetak oleh potongan program berikut?

Operator / pada bilangan bulat (int) bermakna pembagian yang dibulatkan ke bawah. Sebagai contoh, 47 / 10 menghasilkan 4. (Sisa 7 diabaikan.)
*/
int n = 47; //Loop mencetak * dan memperbarui n menjadi 4 (47 / 10).
while (true) { // Loop ini akan terus berjalan tanpa henti karena menggunakan while (true)
    if (n == 0) { 
        break;
    }
    cout << "*"; //mencetak *
    n = n / 10; //Setelah mencetak, nilai n diperbarui menjadi n / 10. Operasi ini akan membagi n dengan 10 dan membulatkan ke bawah (floor) untuk tipe integer.
}
