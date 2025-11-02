#include <iostream>
const int MIN_VALUE = 0;
int main()
{
	//Напишете програма, която прочита число n (n >= 0) и извежда всяко просто число (prime number) от 0 до n включително, разделени със ,.
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	if (n < MIN_VALUE)
	{
		std::cout << "Invalid number given! Number must be >= 0.";
		return 0;
	}
	std::cout << "Primes from 0 to " << n << ": ";
	if (n >= 2)
	{
		std::cout << 2;
	}
	for (int i = 3; i <= n; i += 2)
	{
		bool isPrime = true;
		for (int j = 3; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			std::cout << ", " << i;
	}
}
