#include <iostream>
//Да се напише фунцкия bool permutationNumbers(int a, int b), която връща дали числата a и b са пермутации едно на друго.
const int MIN_VALUE = 0;
int absVal(int number)
{
	return number < 0 ? -number : number;
}
int countGivenDigit(int number, int digit)
{
	if (number == 0 && digit == 0)
		return 1;

	int counter = 0;
	while (number > 0)
	{
		if (number % 10 == digit)
			counter++;
		number /= 10;
	}
	return counter;
}
bool permutationNumbers(int a, int b)
{
	a = absVal(a);
	b = absVal(b);

	for (int i = 0; i <= 9; i++)
	{
		if (countGivenDigit(a, i) != countGivenDigit(b, i))
			return false;
	}
	return true;
}
int main()
{
	int a, b;
	std::cout << "Input 2 numbers: ";
	std::cin >> a >> b;
	std::cout << permutationNumbers(a, b);
}
