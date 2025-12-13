#include <iostream>

void swap(unsigned& a, unsigned& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

char toUpperBitwise(char& n)
{
	const unsigned pos = 5;
	unsigned mask = 1;
	mask <<= pos;
	return  n &= ~mask;
}


int onesCount(unsigned n)
{
	unsigned count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int lastBitToZero(unsigned n)
{
	return n & (n - 1);
}

int lastKOfN(unsigned n, unsigned k)
{
	unsigned mask = (1 << k) - 1;
	return n & mask;
}

int main()
{
	char n = 's';
	std::cout << toUpperBitwise(n) << std::endl;
	std::cout << onesCount(189) << std::endl;
	std::cout << lastBitToZero(12) << std::endl;
	std::cout << lastKOfN(189, 4) << std::endl;
}