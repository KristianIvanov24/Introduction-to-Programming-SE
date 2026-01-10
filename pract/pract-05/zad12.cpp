#include <iostream>
//Напишете функция, която приема неотрицателни числа n и k и връща дали k е инфикс в n.
const int MIN_VALUE = 100;
bool isInfix(int n, int k)
{
	if (n < MIN_VALUE)
		return false;
	n /= 10;
	int temp = k;
	while (n > 10)
	{
		if (k != 0 && temp == 0)
			return true;
		if (k == 0 && n % 10 == 0)
			return true;
		if (temp % 10 == n % 10)
		{
			temp /= 10;
			n /= 10;
		}
		else
			temp = k;
	}
	return k != 0 && temp == 0;
}
int main()
{
	int n, k;
	std::cout << "Input 2 numbers: ";
	std::cin >> n >> k;
	std::cout << isInfix(n, k);
}
