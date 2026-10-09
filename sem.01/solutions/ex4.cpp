/*
Задача 4: Да се напише програма, която прочита от клавиатурата латинска буква голяма и 
извежда поредния й номер в латинската азбука.

Вход: А, Изход: 1
*/

#include <iostream>

int main()
{
	char letter;
	std::cin >> letter;

    int placeInAlphabet = letter - 'A' + 1;

	std::cout << placeInAlphabet;

	return 0;
}