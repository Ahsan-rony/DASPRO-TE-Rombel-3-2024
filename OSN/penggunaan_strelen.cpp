#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello, World!"; 
    for (int i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }
    printf("\n"); 
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        printf("%c", s[i]);
    }
    printf("\n"); 
    return 0;
}
