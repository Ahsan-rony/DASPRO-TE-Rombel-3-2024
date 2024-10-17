#include <iostream>

// Function to calculate Fibonacci using recursion
int fibonacci(int N) {
    if (N <= 1) {
        return N; // Base case
    }
    return fibonacci(N - 1) + fibonacci(N - 2); // Recursive calls
}

// Helper function to visualize the recursive calls
void printFibonacciCalls(int N, int level = 0) {
    if (N <= 1) {
        std::cout << std::string(level * 2, ' ') << "fibonacci(" << N << ") = " << N << std::endl;
        return;
    }
    std::cout << std::string(level * 2, ' ') << "fibonacci(" << N << ")" << std::endl;
    printFibonacciCalls(N - 1, level + 1);
    printFibonacciCalls(N - 2, level + 1);
}

int main() {
    int N = 5; // Example: Calculate Fibonacci(5)

    std::cout << "Calculating Fibonacci(" << N << "):" << std::endl;
    printFibonacciCalls(N); // Print the recursive calls
    int result = fibonacci(N); // Calculate Fibonacci
    std::cout << "Fibonacci(" << N << ") = " << result << std::endl; // Display result

    return 0;
}
