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


bool isSuffix(unsigned long long num, unsigned long long suffix)
{
    int suffixLen = countDigits(suffix);
    int coef = myPow(10, suffixLen);
    
    return num % coef == suffix;
}

int main()
{
    unsigned long long n, k;
    std::cin >> n >> k;

    std::cout << isSuffix(n, k);
}