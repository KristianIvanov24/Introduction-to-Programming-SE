#include <iostream>

// Алгоритъм за преобразуване от произволна бройна система в десетична бройна система

int getIndexOfSymbol(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch >= 'A' && ch <= 'Z')
		return 10 + (ch - 'A');
	else
		return -1; // error
}

unsigned fromRandomToDecimal(const char from[], size_t size, unsigned k)
{
	unsigned result = 0;

	for (int i = size - 1, mult = 1; i >= 0; i--, mult *= k)
		result += getIndexOfSymbol(from[i]) * mult;
	return result;
}