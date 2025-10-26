#include <iostream>

int main()
{
	int num, mostCommonDigit = 0, mostCommonCount = 0;
	std::cin >> num;

	for(int i = 0; i <= 9; i++) 
	{
		int currentCount = 0;
		int tempNum = num;

		while(tempNum != 0) 
		{
			int digit = tempNum % 10;
			if (digit == i) currentCount++;

			tempNum /= 10;
		}

		if(currentCount > mostCommonCount) 
		{
			mostCommonCount = currentCount;
			mostCommonDigit = i;
		}
	}

	std::cout << mostCommonDigit << std::endl;

    return 0;
}