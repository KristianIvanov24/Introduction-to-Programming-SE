/*
Задача 6: Напишете програма, която въвежда две числа - a и b и извежда като резултат (a + b)^4 - (a-b)^2

Вход: 5 7, Изход: 20732
*/

#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	int expr1 = a + b;
	int expr2 = a - b;

	int res = expr1 * expr1 * expr1 * expr1 - expr2 * expr2;

	std::cout << res;

  return 0;
}
