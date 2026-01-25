//1
/*#include <iostream>

void smallToBigAndBigToSmall(char *str)
{
    if (!str)
        return;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 'a' - 'A';
        }
        str++;
    }
}

int main()
{
    char str[] = "This, HERe, is my BeLoVED sTRING!";
    smallToBigAndBigToSmall(str);
    std::cout << str;
}
//2
#include <iostream>

long convertNumber(const char* numStr)
{
    if (!numStr)
        return 0;
    int result = 0;
    while(*numStr)
    {
        if (*numStr >= '0' && *numStr <= '9')
        {
            result += *numStr;
        }
        else return -1;
        numStr++;
    }
    return result;
}

int main()
{
    char str[] = "a435";
    std::cout<<convertNumber(str);
}
//3
#include <iostream>

bool isBigAfterSmall(const char* str)
{
        if (!str)
            return 0;
    while(*(str+1)!='\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            str++;
            if (!(*str >= 'A' && *str <= 'Z'))
                return false;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            str++;
            if (!(*str >= 'a' && *str <= 'z'))
                return false;
        }
        else return false;
    }
    return true;
}

int main()
{
    char str[] = "wazaaa";
    std::cout << isBigAfterSmall(str);
}
//4
#include <iostream>

int amountOfWords(const char* str)
{
    if (!str)
        return 0;
    int amount = 0;
    while (*str)
    {
        if ((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A') || (*str <= '9' && *str >= '0'))
        {
            str++;
            if (!((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A') || (*str <= '9' && *str >= '0')))
            {
                amount++;
            }
            continue;
        }
        str++;
    }
    return amount;
}

int main()
{
    char str[] = "a!(#*&b@$)%@*a)#!z ";
    std::cout << amountOfWords(str);
}
//5
#include <iostream>

const int SIZE = 1024;

int strLen(const char* str)
{
    if (!str)
        return 0;
    int lenght = 0;
    while (*str)
    {
        lenght++;
        str++;
    }
    return lenght;
}

void toInsertInPos(char* text, char toinsert, int i)
{
    int lenght = strLen(text);
    for (int j = lenght+1; j >=i+1; --j)
    {
        text[j] = text[j-1];
    }
    text[i] = toinsert;
    std::cout << text;
}

int main()
{
    char text[SIZE];
    char toinsert;
    int i;
    std::cin.getline(text, SIZE);
    std::cin >> toinsert;
    std::cin >> i;
    toInsertInPos(text, toinsert, i);
}
//6
#include <iostream>

const int SIZE = 1024;

int strLen(const char* str)
{
    if (!str)
        return 0;
    int lenght = 0;
    while (*str)
    {
        lenght++;
        str++;
    }
    return lenght;
}

void toRemoveOnPos(char* text, char toDelete)
{
    int lenght = strLen(text);
    for (int j = 0; j < lenght; ++j)
    {
        if (text[j] == toDelete)
        {
            for (int k = j; k <= lenght; ++k)
            {
                text[k] = text[k + 1];
            }
        }
    }
    std::cout << text;
}

int main()
{
    char text[1024];
    char toDelete;
    std::cin.getline(text, SIZE);
    std::cin >> toDelete;
    toRemoveOnPos(text, toDelete);
}

#include <iostream>

const int SIZE = 1024;

int strLen(const char* str)
{
    if (!str)
        return 0;
    int lenght = 0;
    while (*str)
    {
        lenght++;
        str++;
    }
    return lenght;
}

void insertStrInOtherStr(char* str1, const char* str2,int pos)
{
    if (!str1 || !str2)
        return;
    int lenghtStr1 = strLen(str1);
    int lenghtStr2 = strLen(str2);
    for (int i=lenghtStr1;i>=pos;--i)
    {
        str1[i + lenghtStr2] = str1[i];
    }
    for (int i = 0; i < lenghtStr2; ++i)
    {
        str1[pos + i] = str2[i];
    }
    str1[lenghtStr1 + lenghtStr2] = '\0';
}

int main()
{
    char str1[SIZE];
    char str2[SIZE];
    int i;
    std::cin.getline(str1, SIZE);
    std::cin.getline(str2, SIZE);
    std::cin >> i;
    insertStrInOtherStr(str1, str2, i);
    std::cout << str1;
}
//8
#include <iostream>

const int SIZE = 1024;

int myStrLen(const char* str)
{
    if (!str)
        return 0;
    int amount = 0;
    while (*str)
    {
        amount++;
        str++;
    }
    return amount;
}

bool isPrefix(const char* str1, const char* str2)
{
    while (*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    return *str2 == '\0';
}

void myStrCopy(char* str1, char* str2)
{
    while (*str2)
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1='\0';
}

void deleteAWord(char* text, const char* word)
{
    int lenWord = myStrLen(word);
    char A[124] = { 0 };
    char* buffer=A;
    char* start = buffer;
    char* textCopy = text;
    while (*text)
    {
        if (isPrefix(text, word))
        {
            text += lenWord;
        }
        else
        {
            *buffer = *text;
            buffer++;
            text++;
        }
    }
    myStrCopy(textCopy, start);
}

int main()
{
    char str[SIZE] = "Hello gorgeous - FMI!   kalin o gorgeous kkk";
    char word[] = "o gorgeous";
    deleteAWord(str, word);
    std::cout << str;
}

//9
#include <iostream>

const int SIZE = 1024;

int myStrLen(const char* str)
{
    if (!str)
        return 0;
    int amount = 0;
    while (*str)
    {
        amount++;
        str++;
    }
    return amount;
}

void difference(const char* str1, const char* str2, char* result)
{
    int size1 = myStrLen(str1);
    int size2 = myStrLen(str2);
    bool isThere = false;
    for (int i = 0; i < size1; ++i)
    {
        isThere = false;
        for (int j = 0; j < size2; ++j)
        {
            if (str1[i] == str2[j])
            {
                isThere = true;
                break;
            }
        }
        if (!isThere)
        {
            *result = str1[i];
            result++;
        }
    }
    for (int i = 0; i < size2; ++i)
    {
        isThere = false;
        for (int j = 0; j < size1; ++j)
        {
            if (str2[i] == str1[j])
            {
                isThere = true;
                break;
            }
        }
        if (!isThere)
        {
            *result = str2[i];
            result++;
        }
    }
    *result = '\0';
}

int main()
{
    char str1[SIZE];
    char str2[SIZE];
    char result[SIZE] = {};
    std::cin.getline(str1, SIZE);
    std::cin.getline(str2, SIZE);
    difference(str1, str2, result);
    std::cout << result;
}
//10
#include <iostream>

int const SIZE = 1024;

int myStrLen(const char* str)
{
    if (!str)
        return 0;
    int amount = 0;
    while (*str)
    {
        amount++;
        str++;
    }
    return amount;
}

void everyNewWordCapitalized(char* str)
{
    int len = myStrLen(str);
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 'a' + 'A';
    }
    for (int i = 1; i < len; ++i)
    {
        if ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') && (!(str[i] <= 'Z' && str[i] >= 'A')))
        {
            str[i + 1] = str[i + 1] - 'A' + 'a';
        }
        if ((!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
        {
            str[i + 1] = str[i + 1] - 'a' + 'A';
        }
        if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] >= 'A' && str[i+1] <= 'Z'))
        {
            str[i + 1] = str[i + 1] - 'A' + 'a';
        }
    }
}

int main()
{
    char str[SIZE];
    std::cin.getline(str, SIZE);
    everyNewWordCapitalized(str);
    std::cout<<str;
}*/