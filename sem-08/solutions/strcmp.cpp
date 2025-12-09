#include <iostream>

// - first < second
// 0 first == second
// + first > second

int myStrcmp(const char* str1, const char* str2)
{
	if (!str1 || !str2)
		return 0;

	while (*str1 == *str2)
	{
		str1++;
		str2++;
	}

	return *str1 - *str2;
}

int main()
{
	char str5[] = "tes";
	char str6[] = "test";
	std::cout << myStrcmp(str5, str6) << std::endl;
	return 0;
}