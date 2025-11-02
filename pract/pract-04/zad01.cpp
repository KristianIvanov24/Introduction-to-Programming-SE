#include <iostream>
int main()
{
	//Напишете програма, която въвежда цяло число n и извежда n - тото число на Фибоначи.
	//по принцип знам че първите 2 числа са 1 и в уикипедия така ги пише 
	//ако трябва да праменя цикъла да е както е вашият пример трябва да започва от 1
	int n;
	std::cout << "Inpute number: ";
	std::cin >> n;
	if (n < 0)
	{
		std::cout << "Invalid input number must be higher than 0";
		return 0;
	}
	if (n == 0)
	{
		std::cout << 0;
		return 0;
	}
	if (n == 1 || n == 2)
	{
		std::cout << 1;
		return 0;
	}
	int fib = 0, fib1 = 0, fib2 = 1;
	for (int i = 0; i < n; i++)
	{
		fib = fib1 + fib2;
		fib2 = fib1;
		fib1 = fib;
	}
	std::cout << fib;
  return 0;
}
