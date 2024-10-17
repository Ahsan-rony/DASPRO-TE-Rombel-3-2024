#include <cstdio>

int main() {
 int N;
 scanf("%d", &N);

 int nilai[N];
 f or (int i = 0; i < N; i++) {
  scanf("%d", &nilai[i]);
 }

 int total = 0;
 for (int i = 0; i < N; i++) {
  total += nilai[i];
}
