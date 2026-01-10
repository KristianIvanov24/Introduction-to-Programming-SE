#include <iostream>
bool isPerfect(int number)
{
	if (number < 1)
		return false;
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
			sum += i;
	}
	return sum == number;
}
int main()
{
	//Функция bool isPerfect(int n), която проверява дали числото е перфектно (сборът на всички негови делители без самото число е равен на него).
	int number;
	std::cout << "Input number: ";
	std::cin >> number;
	std::cout << isPerfect(number);
}
