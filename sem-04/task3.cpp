#include <iostream>
bool digitsorder(int number)
{
	int number2 = number;
	int latsdigit = number % 10;
	int amountogdigits = 0;
	while (number > 0)
	{
		number /= 10;
		amountogdigits++;
	}
	for (int j = 1; j <= amountogdigits; j++)
	{
		int digit = number2 % 10;
		if (digit <= latsdigit)
		{
			latsdigit = digit;
			number2 /= 10;
		}if (digit > latsdigit) { return false; }
	}

	return true;
}
int main()
{
	int n;
	std::cin >> n;
	if (digitsorder(n))std::cout << "true";
	else std::cout << "false";
}