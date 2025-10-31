#include <iostream>

/*
Задача 4: Напишете функция, която приема символ и връща дали символа е главна буква. (без ASCII таблица)

Вход: 'А', Изход: true

Вход: '!', Изход: false //или грешка
*/

bool isUpperCase(char ch)
{
	return 'A' <= ch && ch <= 'Z';
}

int main()
{
	std::cout << isUpperCase('a');
	return 0;
}
