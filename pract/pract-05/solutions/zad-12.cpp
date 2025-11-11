#include <iostream>

int countDigits(unsigned long long num)
{
    int count = 0;

    do
    {
        count++;
        num /= 10;
    } while (num);

    return count;
}

int myAbs(int num)
{
    return num < 0 ? -num : num;
}

unsigned long long myPow(unsigned base, int exp)
{
    exp = myAbs(exp);

    unsigned long long result = 1;
    while (exp)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }

        base *= base;
        exp /= 2;
    }

    return result;
}

bool isInfix(unsigned long long num, unsigned long long infix)
{
    int infixLen = countDigits(infix);
    unsigned long long coef = myPow(10, infixLen);

    while (num >= infix)
    {
        if (num % coef == infix)
            return true;

        num /= 10;
    }

    return false;
}

int main()
{
    unsigned long long n, k;
    std::cin >> n >> k;

    std::cout << isInfix(n, k);
}