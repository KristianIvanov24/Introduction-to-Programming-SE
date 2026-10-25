#include <iostream>

/*
Задача 1: Напишете функция, която приема две естествени числа и връща n^k.

Вход: 4 5, Изход: 1024
*/

int power(int n, int k)
{
	int result = 1;

	for (int i = 0; i < k; i++)
	{
		result *= n;
	}

	return result;
}

int main()
{
	std::cout << power(4, 5);
	return 0;
}
