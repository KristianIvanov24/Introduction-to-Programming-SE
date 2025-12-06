#include <iostream>

int concatenation(int n)
{
	int rev = 0;
	int lastDigit;
	int counter = 1;
	int copy = n;
	while (n > 0)
	{
		lastDigit = n % 10;
		rev = rev * 10 + lastDigit;
		n /= 10;
		counter *= 10;
	}
	return counter * copy + rev;
}
int main()
{
	int num;
	std::cin >> num;
	std::cout << concatenation(num);
	return 0;
}