bacaMasukan(N);
cariPrimaSampai(N);
printf("faktorisasi:\n");
temp = N;
while (!cekPrima(temp)) {
d = cariPembagiTerkecil(temp);
temp = temp / d;
printf("%d\n", d);
}
if (temp > 1) {
printf("%d\n", temp);
}
