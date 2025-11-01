#include <iostream>

/*
Задача 5: Напишете функция, която приема символ и връща съответната главна буква (ако подадения символ е малък символ)

Вход: 'а', Изход: 'А'

Вход: '!', Изход: '!' //или грешка
*/

bool isLowerCase(char ch)
{
	return 'a' <= ch && ch <= 'z';
}

char lowerToUpperCase(char ch)
{
	if (!isLowerCase(ch))
		return ch;

	return 'A' + (ch - 'a');
}

int main()
{
	std::cout << lowerToUpperCase('a');
	return 0;
}
