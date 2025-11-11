#include <iostream>

bool isPerfect(unsigned n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return n == sum;
}

int main()
{
    std::cout << isPerfect(6);
}