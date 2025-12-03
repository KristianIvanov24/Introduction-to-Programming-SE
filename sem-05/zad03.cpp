#include <iostream>
//Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). 
//Да се намери и изведе броят на тези от числата, чийто сбор от цифрите е двуцифрено число.
const int SIZE = 1000;
const int MIN_VAL = 10;
const int MAX_VAL = 99;

int absVal(int number)
{
	return number > 0 ? number : -number;
}
int sumOfDigits(int number)
{
	number = absVal(number);
	int sum = 0;

	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}

	return sum;
}
int doubleDigitSumOfDigits(const int array[], size_t size)
{
	int counter = 0;

	for (int i = 0; i < size; ++i)
	{
		int temp = sumOfDigits(array[i]);
		if (temp >= MIN_VAL && temp <= MAX_VAL)
			counter++;
	}

	return counter;
}
void inputArray(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cin >> array[i];

	std::cout << '\n';
}
int main()
{
	size_t size;
	std::cout << "Input array size: ";
	std::cin >> size;

	int array[SIZE];
	std::cout << "Input " << size << " numbers: ";
	inputArray(array, size);
	
	std::cout << doubleDigitSumOfDigits(array, size);
}
