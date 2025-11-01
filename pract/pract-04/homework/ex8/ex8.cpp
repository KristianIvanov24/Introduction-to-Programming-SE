#include <iostream>

int main()
{
    int n;
    std::cin >> n;
	bool hasPrimeSum = false;

    if(n <= 0) {
        std::cout << "Invalid number given! Number must be > 0.";
        return 0;
	}

    for (int i = 2; i <= n/2; i++) {

        bool isPrime = true;
		int sqrtNum = sqrt(i);
        for (int j = 2; j <= sqrtNum; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            int additionToNum = n - i;
			int sqrtAdditionToNum = sqrt(additionToNum);
            bool isPrime2 = true;

            for (int j = 2; j <= sqrtAdditionToNum; j++) {
                 if(additionToNum % j == 0){
                    isPrime2 = false;
                    break;
	   			 }
            }

            if (isPrime2) {
				hasPrimeSum = true;
				std::cout << n << " = " << i << " + " << additionToNum << std::endl;
            }

		}
			
    }

    if (!hasPrimeSum) std::cout << n <<" is not a sum of any two prime numbers";


    return 0;
}