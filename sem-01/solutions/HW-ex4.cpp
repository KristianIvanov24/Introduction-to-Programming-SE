/*
Задача 4: Въвежа се цяло число. Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.

Вход: 5, Изход: 1

Вход: 3, Изход: 1

Вход: 9, Изход: 0
*/

#include <iostream>

int main()
{
	int grade;
	std::cin >> grade;
		
	bool isValidGrade = grade >= 2 && grade <= 6;

	std::cout << isValidGrade << std::endl;
}
