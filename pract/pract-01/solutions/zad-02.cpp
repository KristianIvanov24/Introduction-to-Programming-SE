#include <iostream>

const double BGN_TO_EURO_COEF = 1 / 1.9558;

int main()
{
	double bgn;
	std::cout << "Enter a number in BGN: ";
	std::cin >> bgn;

	double euro = bgn * BGN_TO_EURO_COEF;
	std::cout << euro;
}
