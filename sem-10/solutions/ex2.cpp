#include <iostream>

/*
Да се напише функция, която приема стринг и връща два стринга с ТОЧНА големина.
Първият да бъде съставен само от малките букви, а другият да бъде съставен само от главните букви
*/

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

void getLowerAndUpperCount(const char* str, unsigned& lowerCount, unsigned& upperCount)
{
	upperCount = lowerCount = 0;
	if (!str)
		return;

	while (*str)
	{
		if (isLower(*str))
		{
			lowerCount++;
		}
		else if (isUpper(*str))
		{
			upperCount++;
		}

		str++;
	}
}

void getLowerAndUpperString(const char* str, char*& lower, char*& upper)
{
	if (!str)
		return;

	unsigned lowerSize = 0, upperSize = 0;
	getLowerAndUpperCount(str, lowerSize, upperSize);
	lower = new char[lowerSize + 1];
	upper = new char[upperSize + 1];

	unsigned lowerIndex = 0, upperIndex = 0;
	while (*str)
	{
		if (isLower(*str))
		{
			lower[lowerIndex++] = *str;
		}
		else if (isUpper(*str))
		{
			upper[upperIndex++] = *str;
		}

		str++;
	}

	lower[lowerSize] = '\0';
	upper[upperSize] = '\0';
}

int main()
{
	char* lower = nullptr;
	char* upper = nullptr;
	getLowerAndUpperString("ASFSaffsgdADFA123", lower, upper);
	std::cout << lower << '\n' << upper << std::endl;
	delete[] lower;
	delete[] upper;
	return 0;
}
