#include <iostream>

int main()
{
    int n;
	std::cin >> n;

	int hundreds = n / 100;
	n %= 100;

	int tens = n / 10;
	n %= 10;

	int ones = n;

	if(hundreds != tens && hundreds != ones && tens != ones) {
		std::cout << "yes " << hundreds * ones <<std::endl;
	}
	else {
		std::cout << "no " << ones * 100 + tens * 10 + hundreds << std::endl;
	}
}

