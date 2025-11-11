#include <iostream>

int abs(int n)
{
    return n > 0 ? n : -n;
}

bool containsDigit(int n, int k)
{
    if (k < 0 || k > 9)
    {
        return false;
    }

    while (n > 0)
    {
        if (n % 10 == k)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

bool isSymmetricDigitSet(int n)
{
    n = abs(n);
    int copy = n;

    while (n > 0)
    {
        int digit = n % 10;
        if (!containsDigit(copy, 9 - digit))
        {
            return false;
        }
        n /= 10;
    }

    return true;
}

int main()
{
    std::cout << isSymmetricDigitSet(1728) << std::endl;
    std::cout << isSymmetricDigitSet(15) << std::endl;
    std::cout << isSymmetricDigitSet(18) << std::endl;
}