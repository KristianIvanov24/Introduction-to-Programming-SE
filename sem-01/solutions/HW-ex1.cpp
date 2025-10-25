/*
Задача 1: Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.

Вход: 265, Изход: 0

Вход: 290, Изход: 1
*/

#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	bool isEven = number % 2 == 0;

	std::cout << isEven;

	return 0;
}
