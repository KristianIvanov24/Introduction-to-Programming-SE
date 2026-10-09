/*
Задача 5: Да се напише програма, която прочита от клавиатурата две цифри (като символи), 
преобразува ги в числа и извежда тяхното произведение.

Вход: 5 6, Изход: 30
*/

#include <iostream>

int main()
{
	char chNumber1, chNumber2;
	std::cin >> chNumber1 >> chNumber2;

    int toNumber1 = chNumber1 - '0';
    int toNumber2 = chNumber2 - '0';

	std::cout << toNumber1 * toNumber2;

	return 0;
}