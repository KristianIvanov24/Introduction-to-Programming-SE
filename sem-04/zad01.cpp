#include <iostream>
//Напишете функция, която приема неотрицателно число n и връща числото обърнато
int reverseNum(int number)
{
	if (number < 0) return number;
	int result = 0;
	while (number > 0)
	{
		result *= 10;
		result += number % 10;
		number /= 10;
	}
	return result;
}
int main()
{
	int num;
	std::cout << "Input number: ";
	std::cin >> num;
	std::cout << reverseNum(num);
}
