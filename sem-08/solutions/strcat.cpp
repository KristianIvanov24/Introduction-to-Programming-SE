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

void myStrcpy(char* dest, const char* source)
{
	if (!source)
		return;

	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}

	*dest = '\0'; // !!
}

void myStrcat(char* dest, const char* source)
{
	if (!dest || !source)
		return;

	size_t firstLen = myStrlen(dest);
	dest += firstLen;
	myStrcpy(dest, source);
}

int main()
{
	char str3[1024] = "Hello ";
	char str4[] = "students";
	myStrcat(str3, str4);
	std::cout << str3 << std::endl;
	
	return 0;
}