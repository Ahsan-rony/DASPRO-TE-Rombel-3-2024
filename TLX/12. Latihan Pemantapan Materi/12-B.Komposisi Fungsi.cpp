#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int A, B, K, x;
    
    cin >> A >> B >> K >> x;
    
    int result = x;
    for (int i = 0; i < K; ++i) {
        result = abs(A * result + B);
    }
    
    cout << result << endl;
    
}

