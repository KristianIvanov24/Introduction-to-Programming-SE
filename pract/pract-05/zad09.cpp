#include <iostream>
int getDigitByPosition(int n, int k)
{
	if (k < 0 || k>9)
		return -1;
	n = n < 0 ? -n : n;
	int digitsCount = 0;
	int temp = n;
	while (temp > 0)
	{
		digitsCount++;
		temp /= 10;
	}
	temp = n;
	int digitPosition = -1;
	while (temp > 0)
	{
		if (temp % 10 == k)
			digitPosition = digitsCount;
		digitsCount--;
		temp /= 10;
	}
	return digitPosition;
}
int main()
{
	//Напишете функция getDigitByPosition(int n, int k), която връща цифрата на позиция k в n (отляво надясно, броим от 1).
	int n, k;
	std::cout << "Input two numbers: ";
	std::cin >> n >> k;
	std::cout << getDigitByPosition(n, k);
}
