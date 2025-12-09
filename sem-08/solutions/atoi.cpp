#include <iostream>

unsigned charToDigit(char ch)
{
	return ch - '0';
}

unsigned stringToNumber(const char* str)
{
	unsigned result = 0;

	while (*str)
	{
		int digit = charToDigit(*str);
		(result *= 10) += digit;

		str++;
	}

	return result;
}

int myAtoi(const char* str)
{
	if (!str)
		return 0;

	if (*str == '-')
		return -1 * stringToNumber(str + 1);

	return stringToNumber(str);
}

int main()
{
	std::cout << myAtoi("-123") << std::endl;
	
	return 0;
}