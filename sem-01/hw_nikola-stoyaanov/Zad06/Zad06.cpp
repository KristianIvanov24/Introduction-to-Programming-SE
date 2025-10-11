#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int exp1 = a + b, exp2 = a - b;
    int res = exp1 * exp1 * exp1 * exp1 - exp2 * exp2;
    std::cout << res;
    return 0;
}