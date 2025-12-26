#include <iostream>

/*
  Да се напише функция, която приема стринг и връща нов стринг с ТОЧНА ГОЛЕМИНА,
  в който всички числа са цензурирани. (Всяко число е заменено с '*')
*/

bool isNumber(char ch)
{
	return ch >= '1' && ch <= '9';
}

unsigned myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned size = 0;
	while (*str)
	{
		size++;
		str++;
	}

	return size;
}

char* censorNumbers(const char* str)
{
	if (!str)
		return nullptr;

	size_t arrSize = myStrlen(str);
	char* result = new char[arrSize];
	unsigned resultIndex = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			result[resultIndex] = '*';
		}
		else
		{
			result[resultIndex] = *str;
		}

		str++;
		resultIndex++;
	}

	result[arrSize] = '\0';
	return result;
}

int main()
{
	char* str = censorNumbers("21453tfsdgs1");
	std::cout << str << std::endl;
	delete[] str; //!!!

	return 0;
}
