#include <iostream>
const int MIN_VALUE = 1;
const int MAX_VALUE = 10;
int main()
{
	//Напишете програма, която въвежда цяло число n (1 <= n <= 10) и извежда триъгълника на Паскал до n-тото ниво включително.
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	if (n < MIN_VALUE || n > MAX_VALUE)
	{
		std::cout << "Number must be between 1 and 10";
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		int res = 1;
		for (int j = 1; j <= i; j++)
		{
			std::cout << res << " ";
			res *= (i - j + 1);
			res /= j;
		}
		std::cout << res << std::endl;
	}
}
