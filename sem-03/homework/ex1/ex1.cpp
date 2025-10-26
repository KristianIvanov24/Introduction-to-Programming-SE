#include <iostream>

int main()
{
    int sum = 0, num;
    std::cin >> num;

    while (num != 0) 
    {
        sum += num;
		std::cin >> num;
    }

	std::cout << "Sum: " << sum << std::endl;

    return 0;
}