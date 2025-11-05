#include <iostream>
int isDigit(char symbol)
{
	if (symbol < '0' || symbol > '9')
		return -1;
	int dif = 1 - '1';
	return symbol + dif;
}
int main()
{
	//Напишете функция, която приема символ и ако символът е цифра, да върне съответната цифра. Ако символът не е цифра, то да върне -1
	char sym;
	std::cout << "Input symbol: ";
	std::cin >> sym;
	std::cout << isDigit(sym);
}
