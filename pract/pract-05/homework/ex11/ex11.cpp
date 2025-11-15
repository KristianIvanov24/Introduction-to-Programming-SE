#include <iostream>

bool isSuffix(int n, int k) {

    if (k == 0)
        return n % 10 == 0;

    int tempN = n;
    int tempK = k;

    while (tempK > 0) {
        if (tempN % 10 != tempK % 10)
            return false;

        tempN /= 10;
        tempK /= 10;
    }
	return true;
    
}

int main()
{
    int n, k;
	std::cin >> n >> k;

    if (n < 0 || k < 0) {
        std::cout << "Invalid input";
        return 0;
    }

    std::cout << isSuffix(n, k);

    return 0;
}