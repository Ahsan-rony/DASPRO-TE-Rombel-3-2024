// Berapa buah bintang yang dicetak oleh potongan program berikut?

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
