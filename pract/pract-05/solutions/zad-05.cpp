#include <iostream>

int getRemainder(int first, int second)
{
    return first - (first / second) * second;
}

int main()
{
    std::cout << getRemainder(5, 3) << std::endl;
    std::cout << getRemainder(10, 4) << std::endl;
    std::cout << getRemainder(23, 7) << std::endl;
}