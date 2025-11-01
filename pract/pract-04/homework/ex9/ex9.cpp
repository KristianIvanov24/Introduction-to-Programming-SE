#include <iostream>

int main()
{
    int n;
	std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid number given! N must be > 0.";
	    return 0;
    }
    
    int max, min;

    for (int i = 0; i < n; i++) {
        int number;
		std::cin >> number;

        if (i == 0) {
            max = number;
			min = number;
        }

		if (number > max) max = number;
		else if (number < min) min = number;
    }

    std::cout << "Largest number is: " << max << std::endl;
	std::cout << "Smallest number is: " << min << std::endl;

    return 0;
}