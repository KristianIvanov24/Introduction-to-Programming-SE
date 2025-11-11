#include <iostream>

int abs(int n)
{
    return n > 0 ? n : -n;
}

int fact(int n)
{
    if (n < 0)
    {
        return -1;
    }

    int res = 1;

    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }

    return res;
}

bool isStrong(int n)
{
    if (n < 0)
    {
        return false;
    }

    int copy = n;
    int sumOfFactoriels = 0;
    while (copy > 0)
    {
        sumOfFactoriels += fact(copy % 10);

        copy /= 10;
    }

    return n == sumOfFactoriels;
}

int main()
{
    std::cout << isStrong(145);
}