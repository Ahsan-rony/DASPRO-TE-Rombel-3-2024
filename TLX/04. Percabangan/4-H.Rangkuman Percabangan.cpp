// SOAL
Apakah kedua kode berikut ekuivalen?

// kode 1
if (<kondisi1>) {
    ...
} else if (<kondisi2>) {
    ...
} else {
    ...
}

// kode 2
if (<kondisi1>) {
    ...
} else {
    if (<kondisi2>) {
        ...
    } else {
        ...
    }
}

// JAWABAN
Ya, kedua kode tersebut pada dasarnya sama saja!
Sebetulnya, struktur if-else if merupakan sintaks yang disediakan bahasa C++, agar kita tidak harus menuliskan perulangan if-else bersarang apabila terdapat lebih dari satu kondisi.
