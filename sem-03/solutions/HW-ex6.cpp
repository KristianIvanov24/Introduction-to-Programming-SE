#include <iostream>

/*
Задача 6: Да се напише програма, която приема цяло положително число n и отпечатва числата от 1 до n*n в спираловиден вид.

Вход: 3

Изход:

1 2 3
6 5 4
7 8 9
*/

int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 1 + ((i - 1) * n); j <= i * n; j++)
				std::cout << j << ' ';
		}
		else
		{
			for (int j = i * n; j > (i - 1) * n; j--)
				std::cout << j << ' ';
		}

		std::cout << std::endl;
	}

	return 0;
}
