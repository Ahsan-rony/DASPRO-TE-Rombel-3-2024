int total = 0;
for (int i = 1; i <= N; i++) {
    for (int j = N - 3; j >= i; j--) {
        total = total + 1;
    }
}
Kompleksitas potongan program tersebut paling mendekati:
a.O(N 2)

  for (int i = 0; i < N; i++) {
    if (i * i > N) {
        break;
    }
}
Kompleksitas potongan program tersebut paling mendekati..
  b.O( N​)

  counter = N;
while (counter > 0) {
    counter = counter / 3;
}
Kompleksitas potongan program tersebut paling mendekati..
a.O(logN)

  for (int i = 0; i < N; i++) {
    counter = i;
    while (counter > 0) {
        counter = counter / 2;
    }
}
Kompleksitas potongan program tersebut paling mendekati..
a.O(NlogN)

  for (int i = 0; i < N; i++) {
    counter = i;
    while (counter > 0) {
        counter = counter / 2;
    }

    counter = 0;
    while (counter * counter < N) {
        counter = counter + 1;
    }
}
b.O(N N)

  total = 0;
for (int i = 0; i < N; i++) {
    for (int j = 1; j < M; j++) {
        total = total + 1;
    }

    for (int j = 0; j < N; j++) {
        total = total + 1;
    }
}
c.O(N 2+NM)

  total = 0;
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) { 
        total = total + 1;
    }
}
Jika misalkan untuk 
N
=
10
N=10 potongan program tersebut membutuhkan waktu 1 detik untuk dijalankan, maka untuk 
N
=
100
N=100 potongan program tersebut kira-kira membutuhkan waktu..
c.100 detik
