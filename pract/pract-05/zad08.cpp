#include <iostream>
bool isStrong(int n)//145
{
	if (n <= 0)
		return false;
	int sumOfFactorials = 0, currDigit;
	int temp = n;
	while (temp > 0)
	{
		int currFactorial = 1;
		currDigit = temp % 10;
		for (int i = 1; i <= currDigit; i++)
		{
			currFactorial *= i;
		}
		sumOfFactorials += currFactorial;
		temp /= 10;
	}
	return n == sumOfFactorials;
}
int main()
{
	//Функция bool isStrong(int n), която проверява дали сборът от факториелите на цифрите на n е равен на самото n.
	int number;
	std::cout << "Input number: ";
	std::cin >> number;
	std::cout << isStrong(number);
}
