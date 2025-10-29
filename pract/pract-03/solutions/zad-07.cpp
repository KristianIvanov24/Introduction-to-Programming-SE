#include <iostream>

const int MIN_YEAR = 0;
const int CURRENT_YEAR = 2025;

int main()
{
    int year;
    std::cin >> year;

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    bool isValid = year >= MIN_YEAR;

    std::cout << year << " ";

    if (!isValid)
    {
        std::cout << "Invalid year, negative years are not permitted!";
    }
    else if (year < CURRENT_YEAR)
    {
        std::cout << (isLeap ? "was" : "wasn't");
    }
    else if (year == CURRENT_YEAR)
    {
        std::cout << (isLeap ? "is" : "isn't");
    }
    else
    {
        std::cout << (isLeap ? "will be" : "won't be");
    }

    if (isValid)
    {
        std::cout << " a leap year!" << std::endl;
    }
}