int digitFrequency(int n, int digit)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 10 == digit)
            count++;
        n /= 10;
    }
    return count;
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

bool permutationNumbers(int a, int b)
{
    if (countDigits(a) != countDigits(b))
        return false;

    for (int d = 0; d <= 9; d++)
    {
        if (digitFrequency(a, d) != digitFrequency(b, d))
            return false;
    }

    return true;
}