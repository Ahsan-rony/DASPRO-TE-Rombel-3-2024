#include <cstdio>
#include <string>
using namespace std;
int main() {
string s = "Pak Dengklek berternak";
string t1 = "Dengklek";
string t2 = "pak";
string t3 = "klek";
printf("%d\n", s.find(t1)); // 4
printf("%d\n", s.find(t2)); // -1 (tak ditemukan)
printf("%d\n", s.find(t3)); // 8
}
