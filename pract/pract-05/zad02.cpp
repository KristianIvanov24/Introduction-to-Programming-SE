#include <iostream>
int countDigits(int number)
{
	number = number < 0 ? -number : number;
	int counter = 0;
	if (number == 0)
		return 1;
	while (number > 0)
	{
		counter++;
		number /= 10;
	}
	return counter;
}
int main()
{
	//Да се напише функция countDigits(int number), която връща колко цифри има даденото число.
	int number;
	std::cout << "Input number: ";
	std::cin >> number;
	std::cout << countDigits(number);
}
