#include <cstdio>   
#include <cstring>  
int main() {
    const char* s = "Contoh string";

    
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
