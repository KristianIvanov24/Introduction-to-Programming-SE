#include <iostream>

int main()
{
    int num;
	std::cin >> num;
    
    int maxCounter = 0;
    int frequentDigit = 0;

    for (int i = 0; i <= 9; i++)
    {
		int tempCounter = 0;
        int tempNum = num;
        
        while (tempNum)
        {
            if (tempNum % 10 == i)
            {
				tempCounter++;
            }
            tempNum /= 10;
        }

        if (tempCounter == maxCounter)
        {
            frequentDigit = (i < frequentDigit ? i : frequentDigit);
        }
        else if (tempCounter > maxCounter)
        {
            maxCounter = tempCounter;
            frequentDigit = i;
		}
    }
	std::cout << frequentDigit;
    return 0;
}