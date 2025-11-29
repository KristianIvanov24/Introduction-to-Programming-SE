#include <iostream>
bool isSymmetricDigitSet(int n)
{
	n = n < 0 ? -n : n;
	int digit;
	int symDigit;
	int temp = n;
	while (temp > 0)
	{
		int temp2 = n;
		digit = n % 10;
		symDigit = 9 - digit;
		bool containsSymDigit = false;
		while (temp2 > 0)
		{
			if (temp2 % 10 == symDigit)
			{
				containsSymDigit = true;
				break;
			}
			temp2 /= 10;
		}
		if (!containsSymDigit)
			return false;
		temp /= 10;
	}
	return true;
}
int main()
{
	//Да се напише функция isSymmetricDigitSet(int n) която връща true, ако цифрите на n образуват „симетрично множество“, т.е.
	//ако за всяка цифра d в n, цифрата 9 - d също присъства.
	int number;
	std::cout << "Input number: ";
	std::cin >> number;
	std::cout << isSymmetricDigitSet(number);
}
