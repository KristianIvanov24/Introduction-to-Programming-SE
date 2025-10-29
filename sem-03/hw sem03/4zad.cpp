#include <iostream>

int main()
{
    int num1, num2, counter = 0;
    std::cin >> num1 >> num2;

    for (int i = num1; i <= num2; i++)
    {
        for (int k = 0; k <= 9; k++)
        {
            int tempNum = i;
			int tempCounter = 0;
            while (tempNum)
            {
                if (tempNum % 10 == k)
                {
                    tempCounter++;
                }
                tempNum /= 10;
            }
            if (tempCounter >= 2) break;
            if (k == 9) counter++;
        }
    }
    std::cout << counter;
	return 0;
}