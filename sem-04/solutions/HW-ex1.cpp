#include <iostream>

/*
Задача 1: Напишете функция, която приема неотрицателно число n и връща числото обърнато

Вход: 288, Изход: 882
*/

int reverseNumber(int n)
{
	int result = 0;

	while (n != 0)
	{
		(result *= 10) += n % 10;
		n /= 10;
	}

	return result;
}

int main()
{
	std::cout << reverseNumber(2881);
  	return 0;
}
