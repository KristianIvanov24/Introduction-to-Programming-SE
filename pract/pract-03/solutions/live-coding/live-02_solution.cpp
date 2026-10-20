#include <iostream>

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: invalid input";
        return 1;
    }
    
    std::cout << "Primes in [0, " << n << "]: ";

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        // (!) div * div can cause integer overflow
        for (int div = 2; div <= num / div; div++) {
            if (num % div == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            std::cout << num << " ";
    }

    return 0;
}