#include <iostream>

int calc(int x)
{
    return x * x + 2 * x;
}

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << calc(a) << std::endl;
    std::cout << calc(b) << std::endl;
    std::cout << calc(c) << std::endl;
}
