#include <iostream>
bool isArmstrong(int n)
{
	int temp = n;
	if (n < 0)
		return false;
	int sumOfDigits=0;
	int digitsCounter = 0;
	while (n > 0)
	{
		sumOfDigits += n % 10;
		digitsCounter++;
		n /= 10;
	}
	int newNumber=sumOfDigits;
	for (int i = 1; i < digitsCounter; i++)
	{
		newNumber *= sumOfDigits;
	}
	return temp == newNumber;
}
int main()
{
	//Функция bool isArmstrong(int n) – проверява дали сумата на цифрите на n, повдигнати на степен броя на цифрите, е равна на самото число.
	int number;
	std::cout << "Input number: ";
	std::cin >> number;
	std::cout << isArmstrong(number);
}
