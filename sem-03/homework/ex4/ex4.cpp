#include <iostream>

int main()
{
    int m, n, counter = 0;
	std::cin >> m >> n;

	for (int i = m; i <= n; i++) {

		bool isWithDifferentDigits = true;

		for(int j = 0; j <= 9; j++) 
		{
			int currentCount = 0;
			int tempNum = i;
			bool digitFoundTwice = false;

			while (tempNum != 0)
			{
				int digit = tempNum % 10;

				if (digit == j) currentCount++;
				if (currentCount > 1) 
				{
					digitFoundTwice = true;
					break;
				}

				tempNum /= 10;
			}
			if(digitFoundTwice) 
			{
				isWithDifferentDigits = false;
				break;
			}
		}
		

		if (isWithDifferentDigits) counter++;
	}

	std::cout << counter;

    return 0;
}
