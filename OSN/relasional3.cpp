#include <cstdio>
int main() {
printf("%d\n", 2 > 1);
printf("%d\n", !(2 > 1));
printf("%d\n", (2 > 1) && (3 > 1));
printf("%d\n", ((2 > 1) || (3 < 1)) && (1 == 1));
printf("%d\n", (1 != 1) ^ !(1 != 1));
}
