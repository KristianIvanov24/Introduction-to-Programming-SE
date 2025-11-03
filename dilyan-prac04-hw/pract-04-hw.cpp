#include <iostream>
//zad1
/*
int main()
{
    int n;
    std::cin >> n;
    int a = 0;
    int b = 1;
    int next = 0;
    for (int i = 3; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    std::cout << next;
}
*/

//zad2
/*
int main()
{
    int n;
    std::cin >> n;
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)counter++;
    }
    std::cout << counter;
}
*/

//zad3
/*
int main()
{
    int n;
    std::cin >> n;
    int sum = 0;
    int factoriel = 1;
    if (n < 1 || n>20)
    {
        std::cout << "Invalid number given! Number must be in the range [1, 20].";
    }
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        factoriel *= i;
    }
    std::cout << "the sum is: " << sum<<std::endl;
    std::cout << "the factoriel is: " << factoriel;
}
*/

//zad4
/*
int main()
{
    int n;
    std::cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    std::cout << sum;
}
*/

//zad5
/*
int main()
{
    int n;
    std::cin >> n;
    int sum1 = 0;
    for (int i = 1; i <= n; i++)
    {
        sum1 += i;
    }
    int sum2 = 0;
    for (int j = 1; j<n; j++)
    {
        int number;
        std::cin >> number;
        sum2 += number;
    }
    int missingNumber = sum1 - sum2;
    std::cout << missingNumber;
}
*/

//zad6
/*
int main()
{
    int n;
    std::cout << "enter whole number" << std::endl;
    std::cin >> n;
    int k;
    std::cout << "enter a whole number (1 <= k <= 9)" << std::endl;
    std::cin >> k;
    int sum = 0;
    int num = 0;
    for (int i = 1; i <=n; i++)
    {
        num = num * 10 + k;
        sum += num;
    }
    std::cout << sum;
}
*/

//zad7
/*
int main()
{
    int n;
    std::cout << "enter a number >= 0" << std::endl;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int counter = 0;
        for (int j = 1; j <=i ; j++)
        {
            if (i % j == 0) counter++; 
        }
        if (counter == 2)
        {
            std::cout << i << ",";
        }
    } 
}
*/

//zad8
/*
int main()
{
    int n;
    std::cin >> n;
    bool found = false;
    for (int d1=2; d1 <= n; d1++)
    {
        int d2 = n - d1;
        int counterd1 = 0;
        int counterd2 = 0;
        for (int i = 1; i <= d1; i++)
        {
            if (d1 % i == 0)counterd1++;
        }
        for (int j = 1; j <= d2; j++)
        {
            if (d2 % j == 0)counterd2++;
        }
        if (counterd1 == 2 && counterd2 == 2)
        {
            std::cout << d1 << "+" << d2 << "=" << n<<std::endl;
            found = true;
        }
    }
    if (!found)
    {
        std::cout <<n<< " is not a sum of any two prime numbers";
    }
}
*/


//zad9
/*
int main()
{
    int n;
    std::cout << "enter a positive number" << std::endl;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }
    int num;
    std::cout << "enter number 1:";
    std::cin >> num;
    int minNum = num;
    int maxNum = num;
    for (int i = 2; i <= n; i++)
    {
        std::cout << "enter number " << i << ":";
        std::cin >> num;
        if (num < minNum) minNum = num;
        if (num > maxNum) maxNum = num;
    }
    std::cout << "the minimal number is:" << minNum<<std::endl;
    std::cout << "the maximal number is:" << maxNum<<std::endl;
}
*/

//zad10
/*
int main()
{
    int n;
    std::cout << "enter a positive number" << std::endl;
    std::cin >> n;
    int sumodd = 0;
    int sumeven = 0;
    if (n <= 0)
    {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }
    for (int i=1;i<=n; i++)
    {
        int num;
        std::cout << "enter number " << i << ":";
        std::cin >> num;
        if (i % 2 == 1) sumodd += num;
        else sumeven += num;
    }
    std::cout << "the sum of odd numbers is " << sumodd << std::endl;
    std::cout << "the sum of the even numbers is " << sumeven;
}
*/

//zad11
/*
int main()
{
    int n;
    std::cout << "enter a positive number" << std::endl;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int element = 1;
        for (int j = 1; j <= i; j++)
        {
            std::cout << element << " ";
            element = element * (i - j) / j;
        }
        std::cout << std::endl;
    }
}
*/

//zаd12
/*
int digitsSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::cout << "Intersection(A, B) = {";

    for (int i = 1; i <= n; i++)
    {
        bool inA(i % k == 0);
        bool inB(digitsSum(i) == k);

        if (inA && inB)
        {
            std::cout << i << ",";
        }
    }
    std::cout << "}";
    return 0;
}
*/


//zad14

int main()
{
        int n;
        std::cin >> n;

        for (int i = 0; i <= n; i++) 
        {
            std::cout << " ";
        }
        std::cout << "|" << std::endl;

        for (int r = 1; r <= n; r++) 
        { 
            
            for (int i = 1; i <= n - r; i++) 
            {
                std::cout << " ";
            }

            for (int s = 1; s <= r; s++)
            {
                std::cout << "*";
            }
    
            std::cout << " | "; 

            
            for (int s = 1; s <= r; s++) 
            {
                std::cout << "*";
            }

            std::cout << std::endl;
        }

        return 0;
    }
    