#include <iostream>

const int MIN_K = 1;

int countDigits(long long num)
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

long long myPow(int base, int exp)
{
    exp = myAbs(exp);

    long long result = 1;
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

long long removeFirstK(long long& num, int k)
{
    int numLen = countDigits(num);
    if (k > numLen)
    {
        k = numLen;
    }

    long long coef = myPow(10, numLen - k);
    long long removed = num / coef;
    num %= coef;

    return removed;
}

void concatToEnd(long long& num, long long toConcat)
{
    int concatLen = countDigits(toConcat);

    num *= myPow(10, concatLen);
    num += toConcat;
}

void moveFirstKFromAToEndOfB(long long& a, long long& b, int k)
{
    if (k < MIN_K)
    {
        return;
    }

    long long removed = removeFirstK(a, k);
    concatToEnd(b, removed);
}

int main()
{
    long long a = 100;
    long long b = 10;

    moveFirstKFromAToEndOfB(a, b, 1);

    std::cout << a << " " << b;
}