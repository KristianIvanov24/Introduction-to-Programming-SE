#include <iostream>

/*
Задача 3: Напишете функция, която приема цяло число и връща модула му.

Вход: 4, Изход: 4

Вход: -4, Изход: 4
*/

int absoluteValue(int n)
{
	return n > 0 ? n : -n;
}

int main()
{
	std::cout << absoluteValue(4) << std::endl << absoluteValue(-4);
	return 0;
}
