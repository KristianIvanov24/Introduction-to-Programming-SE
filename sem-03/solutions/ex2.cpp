#include <iostream>

/*
Задача 2: Напишете програма, която приема естествено число и връща дали числото е просто.

Вход: 17, Изход: Prime

Вход: 25, Изход: not prime
*/

int main()
{
	int n;
	std::cin >> n;

	if (n <= 1)
	{
		std::cout << "Not prime!" << std::endl; 
	}
	else
	{
		int end = sqrt(n);
		bool isPrime = true;

		for (int i = 2; i <= end; i++)
		{
			if (n % i == 0) 
			{
				isPrime = false;
				break;  
			}
		}

		if (isPrime)
		{
			std::cout << "Prime!" << std::endl;
		}
		else
		{
			std::cout << "Not prime!" << std::endl;
		}
	}

	return 0;
}
