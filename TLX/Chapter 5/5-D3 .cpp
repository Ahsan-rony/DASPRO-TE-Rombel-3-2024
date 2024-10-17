// Berapa buah bintang yang dicetak oleh potongan program berikut?

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
