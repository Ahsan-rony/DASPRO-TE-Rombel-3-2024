#include <cstdio>  // Untuk fungsi printf

int main() {
    // Loop tiga kali untuk setiap variabel
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 3; k++) {
                printf("%d%d%d\n", i, j, k);  // Output i, j, k
            }
        }
    }
    
    return 0;
}
