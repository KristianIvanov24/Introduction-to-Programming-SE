#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	if (n < 0)
	{
		std::cout << "Invalid number given! Number must be >= 0.";
	}
	else
	{
		std::cout << "Primes from 0 to " << n << ": ";
		for (int i = 2; i <= n; i++)
		{
			bool isPrime = true;
			for (int j = 2; j * j <= i; j++)
			{
				if (i % j == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
			{
				std::cout << i << ", ";
			}
		}
	}
	return 0;
}