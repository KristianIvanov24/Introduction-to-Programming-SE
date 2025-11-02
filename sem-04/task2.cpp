#include <iostream>
void numreversednum(int number)
{
	int reversednum = 0;
	int copynumber = number;
	while (number != 0)
	{
		int digits = number % 10;
		reversednum = reversednum * 10 + digits;
		number /= 10;
	}
	std::cout << reversednum << copynumber;
}
int main()
{
	int n;
	std::cin >> n;
	numreversednum(n);
}