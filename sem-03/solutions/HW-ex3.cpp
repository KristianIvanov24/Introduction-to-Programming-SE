#include <iostream>

/*
Задача 3: Напишете програма, която приема цяло число и връща най-често срещаната цифра. Ако има няколко най-често срещани, то да се отпечата най-малката.

Вход: 2881, Изход: 8

Вход: 456, Изход: 4
*/

int main()
{
	int n;
	std::cin >> n;

	int mostCommonDigit = -1;
	int maxOccurences = 0;

	for (int currentDigit = 0; currentDigit <= 9; currentDigit++)
	{
		int copyN = n;
		int currentDigitOccurences = 0;
		while (copyN != 0)
		{
			int lastDigit = copyN % 10;
			if (currentDigit == lastDigit)
			{
				currentDigitOccurences++;
			}

			copyN /= 10;
		}

		if (currentDigitOccurences > maxOccurences)
		{
			mostCommonDigit = currentDigit;
			maxOccurences = currentDigitOccurences;
		}
	}

	std::cout << mostCommonDigit;

	return 0;
}
