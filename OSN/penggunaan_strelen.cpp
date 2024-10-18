#include <cstdio> // untuk printf
#include <string> // untuk std::string

int main() {
    std::string s = "Contoh String";
    
    // Loop O(N)
    for (int i = 0; i < s.length(); i++) {
        printf("%c", s[i]);
    }
    
    return 0;
}
