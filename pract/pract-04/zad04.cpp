#include <iostream>
const int MIN_VALUE=1;
int main()
{
	//Напишете програма, която приема положително цяло число n и отпечатва сумата на неговите цифри
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	if (n < MIN_VALUE)
	{
		std::cout << "Invalid number given! Number must be in range [1, +inf]";
		return 0;
	}
	int sumOfDigits=0;
	while (n != 0)
	{
		sumOfDigits += n % 10;
		n /= 10;
	}
	std::cout << "Sum of digits: " << sumOfDigits;
}
