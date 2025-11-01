#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid number given! Number must be >= 0.";
        return 0;
    }

	bool first = true;
	std::cout << "Primes from 0 to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        int sqrtNum = sqrt(i);

        for(int j = 2; j <= sqrtNum; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
		}

        if (isPrime) {
            if (!first) std::cout << ", ";
			std::cout << i;
			first = false;
		}
    }

    return 0;
}
