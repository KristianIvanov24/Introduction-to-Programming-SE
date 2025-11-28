#include <iostream>

// Функция, която с побитови операции проверява дали число е четно

bool isEven(int n)
{
	int mask = 1;
	return !(n & mask);
}

int main()
{
	std::cout << isEven(30) << std::endl;
}
