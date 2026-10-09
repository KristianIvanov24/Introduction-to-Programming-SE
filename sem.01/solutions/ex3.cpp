/*
Задача 3: Въвеждат се две числа. Да се отпечата по-голямото от двете.

Вход: 265, 44, Изход: 265
*/

#include <iostream>

int main()
{
	int firstNumber, secondNumber;
	std::cin >> firstNumber >> secondNumber;

	bool isFirstBigger = firstNumber > secondNumber;
	std::cout << isFirstBigger * firstNumber + !isFirstBigger * secondNumber;

	return 0;
}
