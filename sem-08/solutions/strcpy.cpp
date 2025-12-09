#include <iostream>

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

int main()
{
	char str1[] = "source";
	char str2[] = "dest";
	
	//myStrcpy(str2, str1); // !!! size 
	myStrcpy(str1, str2);
	
	std::cout << str1 << std::endl;
	
	return 0;
}