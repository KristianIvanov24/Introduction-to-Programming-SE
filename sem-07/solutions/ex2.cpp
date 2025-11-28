#include <iostream>

// Функция, която с побитови операции повдига 2 на степен k.

unsigned powerOfTwo(unsigned n)
{
    const int LIMIT = sizeof(unsigned) * 8;
    if(n >= LIMIT)
        return 0; //error
        
    return 1 << n;   
}

int main()
{
    std::cout << powerOfTwo(8);

    return 0;
}
