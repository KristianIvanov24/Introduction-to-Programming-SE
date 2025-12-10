#include <iostream>

bool isPrefix(const char* str, const char* suffix)
{
    if (!str || !suffix)
    {
        return false;
    }

    while (*str && *suffix && *str == *suffix)
    {
        str++;
        suffix++;
    }

    return *suffix == '\0';
}

bool contains(const char* str, const char* toFind)
{
    if (!str || !toFind)
    {
        return false;
    }

    while (*str)
    {
        if (isPrefix(str, toFind))
        {
            return true;
        }

        str++;
    }

    return false;
}

int main()
{
    char str[1024] = "qka Z asddas";

    std::cout << contains(str, "qka Z");
}