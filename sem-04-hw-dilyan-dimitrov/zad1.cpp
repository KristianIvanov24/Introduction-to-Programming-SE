#include <iostream>

int reversed(int n)
{
	int rev = 0;
	int lastDigit;
	while (n > 0)
	{
		lastDigit = n % 10;
		rev = rev * 10 + lastDigit;
		n /= 10;
	}
	return rev;
}
int main()
{
	int num;
	std::cin >> num;
	std::cout << reversed(num);
	return 0;
}