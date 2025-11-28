#include <iostream>

// Вдигане на бит (да стане 1)

unsigned makeBitOne(unsigned n, unsigned ind)
{
    unsigned mask = 1;
    mask <<= ind;
    
    return n | mask;
}