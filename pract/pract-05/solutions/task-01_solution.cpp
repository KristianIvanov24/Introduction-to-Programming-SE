#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    switch (a)
    {
        case 1:
            std::cout << "isn't four";
            break;
        case 2:
        case 3:
            std::cout << "isn't one" << "between two & four" << "isn't four";
            break;
        case 4:
            std::cout << "isn't one" << "between two & four";
            break;
        default:
            std::cout << "isn't one" << "isn't four";
    }
}