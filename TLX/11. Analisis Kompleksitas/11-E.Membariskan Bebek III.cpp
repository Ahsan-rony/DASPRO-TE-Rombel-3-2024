#include <iostream>
#include <cmath>
#include <limits>

int main() {
	long long N;
	std::cin >> N;
	
	long long best_r = 0;
	long long best_c = 0;
	long long min_difference = std::numeric_limits<long long>::max();
	
	for (long long r = 1; r * r <= N; ++r) {
		if (N % r == 0) { // r adalah faktor dari N
		    long long c = N / r; // cari C
		    
			// Pastikan r <= c
			if (r <= c)		 {
				long long difference = c - r;
				
				// Cek jika selesih ini lebih kecil
				if (difference < min_difference) {
					min_difference = difference;
					best_r = r;
					best_c = c;
				}
			}
		}
	}
	
	// output pasangan (r, c)
	std::cout << best_r << " " << best_c << std::endl;
	
	return 0;
}
