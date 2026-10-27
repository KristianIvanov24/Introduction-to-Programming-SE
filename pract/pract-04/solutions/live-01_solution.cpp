#include <iostream>

bool isPostfix(unsigned int n, unsigned int k)
{
    do
    {
        if (n % 10 != k % 10)
        {
            return false;
        }

        n /= 10;
        k /= 10;
    } while (k != 0);

    return true;
}

bool isInfix(unsigned int n, unsigned int k)
{
    do
    {
        if (isPostfix(n, k))
        {
            return true;
        }

        n /= 10;
    } while (n != 0);

    return false;
}

int main()
{
    int n, k;

    std::cout << "Enter a value for 'n': ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "Error: invalid value for 'n'";
    }

    std::cout << "Enter a value for 'k': ";
    std::cin >> k;
    
    if (k < 0) {
        std::cout << "Error: invalid value for 'k'";
    }

    bool result = isInfix(n, k);
    std::cout << k << " is " 
        << (result ? "" : "NOT ")
        << "an infix of " << n;
    
    return 0;
}