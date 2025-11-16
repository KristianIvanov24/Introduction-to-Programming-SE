// sem05-hw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const int SIZE = 1024;
bool palindrome(int arr[], size_t len)
{
    int copy = len;
    bool isPalindrome = true;
    for (int i = 0;i < len;i++)
    {
        if (arr[i] == arr[copy - 1])
            isPalindrome = true;
        else
        {
            isPalindrome = false;
            break;
        }
        copy--;
    }
    return isPalindrome;
}
int swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    return a;
}
int inverse(int arr[], int len)
{
    int copy = len;
    int count = 0;
    while(true)
    { 
        bool swapped = false;
        for (int i = 0;i < len-1;i++)
        {
           if (arr[i] > arr[i + 1])
           {
                 swap(arr[i], arr[i + 1]);
                 swapped = true;
                 count++;
           }
            else
                 continue;
        }
        if (!swapped)
            break;
    }
    return count;
}
int digitSum(int num)
{
    num=(num >= 0) ? num : -num;
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
bool primeNumbers(int num)
{
    int end = sqrt(num);
    if (num < 2)return false;
    for (int i = 2;i <= end;i++)
    {
        if (num % i == 0)
            return false;
    }
        return true;
}
bool zeroSequence(int arr[SIZE], int lenght)
{
    for (int i = 0;i < lenght -1;i++)
    {
        if (arr[i] == 0 && arr[i + 1] == 0) return true;
    }
    return false;
}
int main()
{   //1.
    /*
    int arr[SIZE] = { 1, 2, 3, 2, 1 };
    if(palindrome(arr, 5))
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
    */
    //2.
    /*
    int n = 6;
    int arr[SIZE] = { 5, 4, 3, 2, 1, 0 };
    std::cout<<(inverse(arr, n));
    */
    //3.
    /*
    int n;
    std::cin >> n;
    int arr[SIZE];
    for (int i = 0;i < n;i++)
        std::cin >> arr[i];
    int count = 0;
    for (int i = 0;i < n;i++)
    {
        int sum = digitSum(arr[i]);
        if (sum >= 10 && sum <= 99)
            count++;
    }
    std::cout << count;
    */
    //4.
    /*
    int n;
    std::cin >> n;
    int arr[SIZE];
    for (int i = 0;i < n;i++)
        std::cin >> arr[i];
    for (int i = 0;i < n;i++)
    {
        if (primeNumbers(arr[i])) std::cout << arr[i] << std::endl;
    }
    */
    //5.
    int n;
    /*
    std::cin >> n;
    int arr[SIZE];
    for (int i = 0;i < n;i++)
        std::cin >> arr[i];
    if (zeroSequence(arr,n))std::cout << "yes";
    else std::cout << "no";
    */
}

