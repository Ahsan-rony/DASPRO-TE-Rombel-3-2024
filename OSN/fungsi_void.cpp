#include <iostream>
using namespace std;


int main (int x) {
	if (x > 1000) {
		return 0;
	}
	for (int i = 0; i < x; i++) {
		printf ("*");
	}
	printf ("\n");
}
