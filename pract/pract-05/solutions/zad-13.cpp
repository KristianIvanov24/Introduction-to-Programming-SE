#include <iostream>

int reverseNumber(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int countDigits(int n)
{
    int count = 0;
    do
    {
        count++;
        n /= 10;
    } while (n > 0);
    return count;
}

int pow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int concatReverseWithOriginal(int n)
{
    int reversed = reverseNumber(n);
    int digits = countDigits(n);
    return reversed * pow(10, digits) + n;
}

int main()
{
    std::cout << concatReverseWithOriginal(321);
}
