#include <iostream>

int main()
{
    int side1, side2, side3;
    std::cin >> side1 >> side2 >> side3;
	
	bool isTriangle = (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
    if (!isTriangle)
    {
        std::cout << "Triangle does not exist.";
        return 0;
	}
    else
    {
		std::cout << "Triangle exists ";
        if (side1 == side2 && side2 == side3)
        {
            std::cout << "and it is equilateral.\n";
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            std::cout << "and it is isosceles.\n";
        }
        else
        {
			std::cout << "and it is scalene.\n";
        }
        return 0;
    }
}

