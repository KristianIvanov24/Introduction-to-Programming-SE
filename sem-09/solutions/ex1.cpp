#include <iostream>

size_t myStrlen(const char* str)
{
	if (!str)
		return 0;

	size_t result = 0;

	while (*str)
	{
		result++;
		str++;
	}

	return result;
}

char toLowerCase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 'a';
	return ch;
}


bool isPrefix(const char* text, const char* pattern)
{
	while (*pattern && *text)
	{
		if (toLowerCase(*pattern) != toLowerCase(*text))
			return false;

		text++;
		pattern++;
	}

	return *pattern == '\0';
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

	*dest = '\0';
}

char* replaceInText(char* text, const char* where, const char* what)
{
	unsigned whereLen = myStrlen(where);
	unsigned whatLen = myStrlen(what);

	char* start = text;

	while (*text)
	{
		if (isPrefix(text, where))
		{
			char copySecondPart[1024];

			myStrcpy(copySecondPart, text + whereLen);

			myStrcpy(text, what);

			text += whatLen;

			myStrcpy(text, copySecondPart);
		}
		else
		{
			text++;
		}
	}

	return start;
}

int main()
{
	char text[1024] = "I am the best of the best";
	std::cout << replaceInText(text, "best", "worst") << std::endl;
}
