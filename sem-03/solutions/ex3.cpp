#include <iostream>

/*
Задача 3: Напишете програма, която приема естествено число и отпечатва разбиването му на прости множители, сортирани низходящо.

Вход: 50 Изход: 5^2 2^1
*/

int main()
{
	int n;
	std::cin >> n;

	for (int i = n; i > 1; i--)
	{
		int end = sqrt(i);
		bool isPrime = true;

		for (int k = 2; k <= end; k++)
		{
			if (i % k == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (!isPrime)
			continue;

		int count = 0;

		while (n % i == 0)
		{
			count++;
			n /= i;
		}

		if (count >= 1)
		{
			std::cout << i << "^" << count << " ";
		}
	}

	return 0;
}
