#include <iostream>

size_t myStrlen(const char* str)
{
	if (!str) // str == nullptr
		return 0;

	unsigned result = 0;

	while (*str) // (*str) != '\0'
	{
		result++;
		str++;
	}

	return result;
}

int main()
{
	char str[] = "test";
	std::cout << myStrlen(str) << std::endl;
	
	return 0;
}