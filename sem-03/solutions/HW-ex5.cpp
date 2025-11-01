#include <iostream>

/*
Задача 5: Напишете програма, която приема нечетно естествено число и отпечатва следния пясъчен часовник.

Вход: 3

Изход:

***

 *

***
*/

int main()
{
	int n;
	std::cin >> n;

	if (!(n % 2))
	{
		std::cout << "Number should be odd!";
		return 0;
	}

	for (int i = n; i > 0; i -= 2)
	{
		int whiteSpacesCount = (n - i) / 2;
		for (int j = 0; j < whiteSpacesCount; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << '*';
		}

		std::cout << std::endl;
	} 

	for (int i = 3; i <= n; i += 2)
	{
		int whiteSpacesCount = (n - i) / 2;

		for (int j = 0; j < whiteSpacesCount; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << '*';
		}

		std::cout << std::endl;
	}
  
	return 0;
}
