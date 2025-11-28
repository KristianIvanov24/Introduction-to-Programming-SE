#include <iostream>

// Алгоритъм за преобразуване от десетична бройна система в произволна бройна система

char getSymbolFromIndex(int ind)
{
	if (ind >= 0 && ind <= 9)
		return ind + '0';

	if (ind >= 10)
		return (ind - 10) + 'A';

	return 0;
}

void fromDecimalToRandom(unsigned n, char to[], size_t size, unsigned k)
{
	for (int arrayIter = size - 1; arrayIter >= 0; --arrayIter)
	{
		int ind = n % k;
		char current = getSymbolFromIndex(ind);
		to[arrayIter] = current;
		n /= k;
	}
}