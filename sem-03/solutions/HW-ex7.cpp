#include <iostream>

/*
Задача 7: Да се напише програма, която приема цяло положително число n и отпечатва следната гира:

Вход: 4

Изход:

. . . .     . . . .
.     . . . .     .
.     . . . .     .
. . . .     . . . .

Вход: 5

Изход:

. . . . .       . . . . .
.       .       .       .
.       . . . . .       .
.       .       .       .
. . . . .       . . . . .
*/

int main()
{
	int n;
	std::cin >> n;

	int half = n % 2 == 0 ? n / 2 : n / 2 + 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
				std::cout << ". ";
			else
				std::cout << "  ";
		}

		int end = n - 2;
		for (int j = 1; j <= end; j++)
		{
			if (i == half || (n % 2 == 0 && i == half + 1))
				std::cout << ". ";
			else
				std::cout << "  ";
		}

		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
				std::cout << ". ";
			else
				std::cout << "  ";
		}

		std::cout << std::endl;
	}
	return 0;
}
