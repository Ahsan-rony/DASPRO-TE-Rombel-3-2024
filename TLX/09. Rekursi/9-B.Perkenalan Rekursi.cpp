//soal
// Di antara fungsi-fungsi berikut, mana sajakah (jika ada) yang merupakan implementasi fungsi rekursif faktorial yang ekuivalen dengan fungsi rekursif yang telah dibahas di atas?

I.
int faktorial(int n) {
    return faktorial(n);
}

II.
int faktorial(int n) {
    int faktorial_sebelumnya = faktorial(n-1);

    if (n == 1) {
        return 1;
    } else {
        return faktorial_sebelumnya * n;
    }
}

III.
int faktorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

IV.
int faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return faktorial(n + 1) / (n + 1);
    }
}

// jawaban
// Kesimpulannya, opsi II dan III adalah implementasi rekursif yang valid. 
// Namun, karena III adalah yang paling sesuai dengan definisi awal yang dijelaskan, dan jika dianggap lebih tepat, 
// maka jawaban d (III) sebagai satu-satunya yang ekuivalen bisa diterima.



