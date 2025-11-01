#include <iostream>
//Напишете функция, която дадено по подадено естествено число N, 
//връща число, което е резултат от конкатенацията на обърнатото число на N с подаденото N.
int reverseNum(int number)
{
	if (number < 0) return number;
	int reverse = 0;
	while (number > 0)
	{
		reverse *= 10;
		reverse += number % 10;
		number /= 10;
	}
	return reverse;
}
int concatNumAndReverse(int number)
{
	if (number < 0) return number;
	int result = reverseNum(number), reverse = result;
	while (reverse > 0)
	{
		result *= 10;
		result += reverse % 10;
		reverse /= 10;
	}
	return result;
}
int main()
{
	int num;
	std::cout << "Input number: ";
	std::cin >> num;
	std::cout << concatNumAndReverse(num);
}
