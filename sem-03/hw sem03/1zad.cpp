#include <iostream>

int main()
{
    int sum = 0;
    int num;

    do
    {
        std::cin >> num;
        sum += num;
	} while (num != 0);

    std::cout << sum;
}