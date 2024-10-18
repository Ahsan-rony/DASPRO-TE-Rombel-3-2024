#include <cstdio>
int faktorial(int x) {
  if (x == 1) {
   return 1;
  } else {
    return x * faktorial(x-1);
  }
}
