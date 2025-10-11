#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    bool isGrade = n >= 2 && n <= 6;
    std::cout << isGrade;
    return 0;
}