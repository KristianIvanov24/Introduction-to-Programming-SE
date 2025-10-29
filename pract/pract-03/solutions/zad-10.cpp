#include <iostream>

int main()
{
    double x, y;
    double x1, y1, x2, y2;
    std::cin >> x >> y;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double left = x1;
    double right = x2;
    double bottom = y1;
    double top = y2;

    if (left > right) {
        double temp = left;
        left = right;
        right = temp;
    }

    if (bottom > top) {
        double temp = bottom;
        bottom = top;
        top = temp;
    }

    if (x >= left && x <= right && y >= bottom && y <= top)
        std::cout << "The point is inside the rectangle.\n";
    else
        std::cout << "The point is outside the rectangle.\n";
}
