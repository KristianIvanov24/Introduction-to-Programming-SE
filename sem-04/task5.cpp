#include <iostream>
int smallestdigit(int number)
{
	int smallestdigit = number % 10;
	while (number != 0)
	{
		int digit = number % 10;
		if (smallestdigit >= digit) smallestdigit = digit;
		number /= 10;
	}
	return smallestdigit;
}
int removeddigit(int number, int digit)
{
	int result = 0;
	int multi = 1;
	bool in = false;
	while (number != 0)
	{
		int curentdigit = number % 10;
		if (curentdigit == digit && !in)
		{
			number /= 10;
			in = true;
			continue;
		}
		result += curentdigit * multi;
		multi *= 10;
		number /= 10;

	}return result;
}
int sortednumber(int number)
{
	int result = 0;
	int multi = 10;
	while (number != 0)
	{
		result = result * multi + smallestdigit(number);
		number = removeddigit(number, smallestdigit(number));
	}
	return result;
}
int main()
{
	int number;
	std::cin >> number;
	int result = sortednumber(number);
	while (smallestdigit(number) == 0)
	{
		std::cout << 0;
		number = removeddigit(number, 0);
	}
	std::cout << result;
}