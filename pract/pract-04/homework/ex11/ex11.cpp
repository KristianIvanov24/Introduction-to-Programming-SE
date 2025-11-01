#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n < 1 || n > 10) {
        std::cout << "Invalid input";
        return 0;
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {

            int binomCoef;

            if (j == 0 || j == i) {
				binomCoef = 1;
            }
            else {

                int factorialN = 1;
                for (int k = 1; k <= i; k++) {
					factorialN *= k;
                }

				int factorialK = 1;
                for (int k = 1; k <= j; k++) {
                    factorialK *= k;
                }

				int factorialNMinusK = 1;
                for(int k = 1; k <= (i - j); k++) {
                    factorialNMinusK *= k;
				}

                binomCoef = factorialN / (factorialK * factorialNMinusK);
            }

			std::cout << binomCoef << " ";
        }

		std::cout << std::endl;

    }

    return 0;
}