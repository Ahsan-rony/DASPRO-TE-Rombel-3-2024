// D.1 Berapa buah bintang yang dicetak oleh potongan program berikut?

for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
}

/*
Untuk mengetahui berapa banyak bintang yang dicetak oleh potongan program tersebut, mari kita analisis loop:

Ketika i = 1, loop j berjalan sekali dan mencetak 1 bintang.

Ketika i = 2, loop j berjalan dua kali dan mencetak 2 bintang.

Ketika i = 3, loop j berjalan tiga kali dan mencetak 3 bintang.

Ketika i = 4, loop j berjalan empat kali dan mencetak 4 bintang.

Jadi, total bintang yang dicetak adalah:

1 + 2 + 3 + 4 = 10 bintang.

Jadi, potongan program tersebut mencetak 10 bintang.
*/





//D.2 Berapa buah bintang yang dicetak oleh potongan program berikut?

for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        if (j % 2 == 0) {
            cout << "*";
            break;
        }
    }
}

/*
Mari kita analisis potongan program ini:

Ketika i = 1, loop j berjalan dari 1 hingga 1. Tidak ada j yang genap, jadi tidak ada bintang yang dicetak.

Ketika i = 2, loop j berjalan dari 1 hingga 2. j = 2 adalah genap, sehingga satu bintang dicetak, lalu break.

Ketika i = 3, loop j berjalan dari 1 hingga 3. j = 2 adalah genap, sehingga satu bintang dicetak, lalu break.

Ketika i = 4, loop j berjalan dari 1 hingga 4. j = 2 adalah genap, sehingga satu bintang dicetak, lalu break.

Jadi, total bintang yang dicetak adalah 1 (i=2) + 1 (i=3) + 1 (i=4) = 3 bintang.
*/


//D.3 Berapa buah bintang yang dicetak oleh potongan program berikut?

for (int i = 1; i <= 4; i++) {
    if (i % 2 == 0) {
        continue;
    }
    for (int j = 1; j <= i; j++) {
        if ((i + j) % 2 == 0) {
            cout << "*";
        }
    }
}




/*
Mari kita analisis potongan program ini:

Ketika i = 1:
i tidak genap, lanjut ke loop j.
j = 1, (1 + 1) % 2 == 0, sehingga satu bintang dicetak.
Total bintang: 1.

Ketika i = 2:
i genap, lanjut ke iterasi berikutnya.
Total bintang: 1.

Ketika i = 3:
i tidak genap, lanjut ke loop j.
j = 1, (3 + 1) % 2 == 0, sehingga satu bintang dicetak.
j = 2, (3 + 2) % 2 != 0, tidak ada bintang dicetak.
j = 3, (3 + 3) % 2 == 0, sehingga satu bintang dicetak.
Total bintang: 1 + 2 = 3.

Ketika i = 4:
i genap, lanjut ke iterasi berikutnya.
Total bintang: 3.

Jadi, potongan program ini mencetak total 3 bintang.
*/



/* D.4  Berapa buah bintang yang dicetak oleh potongan program berikut?
Operator / pada bilangan bulat (int) bermakna pembagian yang dibulatkan ke bawah. Sebagai contoh, 47 / 10 menghasilkan 4. (Sisa 7 diabaikan.)*/

int n = 47;
while (true) {
    if (n == 0) {
        break;
    }
    cout << "*";
    n = n / 10;
}

/*Langkah pertama: n bernilai 47.
Tidak memenuhi kondisi n == 0, jadi tidak break.
Cetak bintang: *
n = 47 / 10 yang hasilnya adalah 4 (karena pembagian bilangan bulat dibulatkan ke bawah).

Langkah kedua: n sekarang bernilai 4.
Tidak memenuhi kondisi n == 0, jadi tidak break.
Cetak bintang: **
n = 4 / 10 yang hasilnya adalah 0 (pembagian bilangan bulat dibulatkan ke bawah).

Langkah ketiga: n sekarang bernilai 0.
Memenuhi kondisi n == 0, jadi break dari loop.
Program mencetak 2 bintang sebelum berhenti. */
