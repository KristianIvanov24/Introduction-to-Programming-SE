#include <iostream>

int main()
{
    int n;
	std::cin >> n;

	if (n < 1)
	{
		std::cout << "Invalid number given! Number must be in range [1, +inf]";
	}
	else
	{
		int sum = 0;

		while (n)
		{
			sum += n % 10;
			n /= 10;
		}

		std::cout << "Sum of digits: " << sum;
	}
	return 0;
}