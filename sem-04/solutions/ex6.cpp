#include <iostream>
/*
Задача 6: Да се напише програма, която въвежда неотрицателно цяло число n и
отпечатва всички двойки прости числа от вида (6k − 1, 6k + 1), които са по-малки от n.

Вход: 50
Изход:
5 7
11 13
17 19
29 31
41 43
*/

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	double end = sqrt(n);

	for (int i = 2; i <= end; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int n;
	std::cin >> n;

	for (int k = 6; k < n; k += 6)
	{
		if (isPrime(k - 1) && isPrime(k + 1))
			std::cout << k - 1 << ' ' << k + 1 << std::endl;
	}

	return 0;
}
