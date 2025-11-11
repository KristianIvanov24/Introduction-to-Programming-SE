#include <iostream>

/*
Задача 2: Напишете функция, която дадено по подадено естествено число N, връща число, 
		  което е резултат от конкатенацията на обърнатото число на N с подаденото N.

Вход: 1234, Изход: 43211234
*/


int concatDigitAtBack(int number, int digit)
{
	return digit > 9 ? 0 : number * 10 + digit;
}

int reverseNumber(int n)
{
	int result = 0;

	while (n != 0)
	{
		(result *= 10) += n % 10; // or concatDigitAtBack(result, n % 10);
		n /= 10;
	}

	return result;
}

int concatNumbers(int num1, int num2)
{
	int reversedNum2 = reverseNumber(num2);

	while (reversedNum2 != 0)
	{
		(num1 *= 10) += reversedNum2 % 10; // or concatDigitAtBack(num1, reversedNum2 % 10);
		reversedNum2 /= 10;
	}

	return num1;
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << concatNumbers(reverseNumber(n), n);
	
	return 0;
}
