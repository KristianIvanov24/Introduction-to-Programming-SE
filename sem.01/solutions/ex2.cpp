/*
Задача 2: Въвежда се трицифрено цяло число n. Да се отпечата обърнатото число събрано с единица.

Вход: 265, Изход: 563

Вход: 289, Изход: 983
*/

#include <iostream>

int main()
{
	int number;
	std::cin >> number;
	
	int ones, tens, hundreds;

	ones = number % 10;
	number /= 10;

	tens = number % 10;
	number /= 10;

	hundreds = number % 10;

	std::cout << ones << tens << hundreds + 1;

  return 0;
}

