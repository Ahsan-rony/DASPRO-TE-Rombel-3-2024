// Berapa buah bintang yang dicetak oleh potongan program berikut?

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

Jadi, potongan program tersebut mencetak 10 bintang.✨
*/
