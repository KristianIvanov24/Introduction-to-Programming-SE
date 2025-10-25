/*10. Напишете програмата, която проверява дали точка {x, y} се намира вътре в правоъгълник {x1, y1} - {x2, y2}. 
Имайте навпредвид, че НЕ е гарантирано x1 < x2 и y1 < y2.*/
#include <iostream>

int main () {
    int x, y, x1, x2, y1, y2;
    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    if (x1 > x2)
    {
        x1 += x2;
        x2 = x1 - x2;
        x1 -= x2;
    }
    if (y1 > y2)
    {
        y1 += y2;
        y2 = y1 - y2;
        y1 -= y2;
    }

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
        std::cout << "Point is inside the rectangle" << std::endl;
    else
        std::cout << "Point is outside the rectangle" << std::endl;

    return 0;
}