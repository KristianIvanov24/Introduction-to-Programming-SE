#include <iostream>

const char SPACE = ' ';

int main()
{
    int n;
	std::cin >> n;

    if (n < 1) {
        std::cout << "Invalid input";
		return 0;
    }

    
	int rowsTotal = n % 2 == 0 ? n + 1 : n;
    int mid = rowsTotal / 2;

    for (int i = 0; i < rowsTotal; i++) {

        int spaces = abs(mid - i) * 2;
		int numsInRowCount = rowsTotal - spaces;

        for(int j = 0; j < spaces; j++) 
            std::cout << SPACE;


        int outputNum = n - 1;
        for (int j = 0; j < numsInRowCount; j++) {

			std::cout << outputNum;

            if(j < numsInRowCount / 2) outputNum--;
			else outputNum++;

            if(j < numsInRowCount - 1 ) {
                std::cout << SPACE;
			}
        }


        std::cout << std::endl;
    }

    return 0;
}