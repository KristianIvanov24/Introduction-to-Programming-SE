#include <iostream>
int reversed(int number)
{
	int reversednum = 0;
	while (number != 0)
	{
		int digits = number % 10;
		reversednum = reversednum * 10 + digits;
		number /= 10;
	}
	return reversednum;

}
int main()
{
	int n, result;
	std::cin >> n;
	result = reversed(n);
}