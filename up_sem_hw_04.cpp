#include <iostream>

int reverseNumber(int number)
{
	int reversed = 0;
	while (number != 0)
	{
		int digit = number % 10;
		reversed = reversed * 10 + digit;
		number /= 10;
	}
	return reversed;
}

int numberOfDigits(int number)
{
	int count = 0;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return count;
}

int toPower(int base, int exp)
{
	int result = 1;
	for (int i = 0; i < exp; ++i)
	{
		result *= base;
	}
	return result;
}

bool areDigitsSorted(int number)
{
	while (number != 0)
	{
		int lastDigit = number % 10;
		number /= 10;
		int nextDigit = number % 10;
		if (nextDigit > lastDigit)
		{
			return false;
		}
	}
	return true;
}

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void sortNumberDigits(int number)
{
	for (int i = 1; i < 10; ++i)
	{
		int temp = number;
		while (temp != 0)
		{
			int digit = temp % 10;
			if (digit == i)
			{
				std::cout << digit;
			}
			temp /= 10;
		}
	}
}

//int main()
//{
//	int number;
//	std::cin >> number;
//
//	if (number < 1)
//	{
//		std::cout << "Invalid input";
//		return 0;
//	}
//
//	std::cout << reverseNumber(number);
//}


//int main()
//{
//	int number;
//	std::cin >> number;
//
//	if (number < 1)
//	{
//		std::cout << "Invalid input";
//		return 0; 
//	}
//
//	int reversedNumber = reverseNumber(number);
//	int zerosToAdd = toPower(10, numberOfDigits(number));
//	std::cout << reversedNumber * zerosToAdd + number;
//}

//int main()
//{
//	int number;	
//	std::cin >> number;
//	if(number < 1)
//	{
//		std::cout << "Invalid input";
//		return 0;
//	}
//
//	if (areDigitsSorted(number)) std::cout << "true";
//	else std::cout << "false";
//}


//int main()
//{
//	double x1, y1, x2, y2, x3, y3;
//	double area = 0;
//	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	area = distance(x1, y1, x2, y2) + distance(x2, y2, x3, y3) + distance(x3, y3, x1, y1);
//	std::cout << area;
//}


//int main()
//{
//	int number;
//	std::cin >> number;
//	if (number < 1)
//	{
//		std::cout << "Invalid input";
//		return 0;
//	}
//	sortNumberDigits(number);
//}
