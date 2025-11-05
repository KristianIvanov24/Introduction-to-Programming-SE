#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    if (n <= 0 || k <= 0)
    {
        std::cout << "Invalid n or k!";
        return 0;
    }

    std::cout << "Intersection(A, B) = { ";

    // print commas before a number except the first
    // (instead of after a number) to avoid last comma { 1, 2, }
    bool isFirstI = true;
    for (int i = 1; i <= n; i++)
    {

        int iSum = 0;
        int iCpy = i;
        while (iCpy)  // same as while (iCpy != 0)
        {
            iSum += iCpy % 10;
            iCpy /= 10;
        }

        bool isInA = i % k == 0;
        bool isInB = iSum == k;

        if (isInA && isInB)
        {
            if (!isFirstI)
            {
                std::cout << ", ";
            }
            std::cout << i;
            isFirstI = false;
        }
    }

    if (!isFirstI)
    {
        std::cout << " ";
    }
    std::cout << "}";
}