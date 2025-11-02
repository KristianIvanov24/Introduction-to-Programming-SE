#include <iostream>
const int MIN_VALUE = 1;
const int MAX_VALUE = 20;
int main()
{
	//Напишете програма, която прочита число n (1 <= n <= 20) и извежда сбора на числата от 1 до n и n!
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	if (n <= MIN_VALUE || n >= MAX_VALUE)
	{
		std::cout << "Invalid number given! Number must be in the range [1, 20].";
		return 0;
	}
	int sum = (n + 1) * n / 2;
	int factorial = 1;
	for (int i = n; i > 1; i--)
		factorial *= i;
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Factorial: " << factorial;
}
