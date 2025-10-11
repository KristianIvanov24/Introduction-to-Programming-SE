#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    bool isEven = n % 2 == 0; 
    std::cout << isEven;
    return 0;
}
