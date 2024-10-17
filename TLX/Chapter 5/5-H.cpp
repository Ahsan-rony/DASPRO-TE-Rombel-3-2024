/*Apakah kedua kode berikut ekuivalen?*/

//soal satu//
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      /*loop akan berjalan dari i = 0 hingga i = 9, dan ketika i adalah bilangan genap, continue akan dilewati,
      sehingga hanya akan mencetak bintang (*) ketika i adalah bilangan ganjil.*/


        continue;
    }
    cout << "*";
}

//soal dua//
int i = 0;
//Ini menginisialisasi variabel i dengan nilai awal 0.//
while (i < 10) {
  //Loop ini akan terus berjalan selama i kurang dari 10//
    if (i % 2 == 0) {
      //Kondisi ini memeriksa apakah i adalah bilangan genap (karena i % 2 == 0).//
        continue;
      /*Jika kondisi di atas benar (yakni i bilangan genap), 
        eksekusi akan langsung melompat ke awal loop lagi tanpa menjalankan sisa perintah di dalam loop, 
      termasuk i++ yang menaikkan nilai i*/
    }
    cout << "*";
    i++;
}
//pilihan jawaban//
/*a.
ya

b.
tidak*/
  /*
  Kedua kode tersebut TIDAK ekuivalen.

Pada kode pertama, 5 bintang akan tercetak, yakni pada iterasi i=1, i=3, i=5, i=7, dan i=9.

Pada kode kedua, saat i=0, perintah continue akan dijalankan, namun variabel i tidak pernah sempat berubah. Sehingga, perulangan tidak akan pernah berhenti.

Inilah perbedaannya. Pada perulangan for, operasi akhir (seperti i++) akan tetap dijalankan sebelum iterasi dihentikan oleh continue.
Untuk memperbaiki kode ini, pemindahan i++ ke tempat yang tepat, atau menambahkannya di sebelum pernyataan continue, akan mencegah masalah ini
 */
