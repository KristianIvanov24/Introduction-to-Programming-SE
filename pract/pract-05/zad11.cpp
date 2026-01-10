#include <iostream>
//Напишете функция, която приема неотрицателни числа n и k и връща дали k е суфикс на n.
const int MIN_VALUE = 0;
bool isSuffix(int n, int k)
{
	while (k > 0)
	{
		if (k % 10 != n % 10)
			return false;
		k /= 10;
		n /= 10;
	}
	return true;
}
int main()
{
	int n, k;
	std::cout << "Input 2 numbers: ";
	std::cin >> n >> k;
	std::cout << isSuffix(n, k);
}
