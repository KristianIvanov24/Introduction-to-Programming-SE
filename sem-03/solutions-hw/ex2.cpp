#include <iostream>

int main () {
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;

    for (int x = -100; x <= 100; x++)
    {
        int x2 = x * x, x3 = x2 * x;
        int y = a * x2 * x2 + b * x3 + c * x2 + d * x + e;

        if (y >= 0)
            std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}