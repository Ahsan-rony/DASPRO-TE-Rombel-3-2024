#include <cstdio>

int fibonacci(int N) {
    if (N <= 1) {
        return N;
    } else {
        return fibonacci(N - 1) + fibonacci(N - 2);
    }
}
