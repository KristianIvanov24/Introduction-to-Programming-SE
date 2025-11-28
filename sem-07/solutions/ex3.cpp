#include <iostream>

// Изчистване на бит (да стане 0) в число на дадена позиция

unsigned makeBitZero(unsigned n, unsigned ind) //clear bit
{
    unsigned mask = 1;
    mask <<= ind;
    
    mask = ~mask;
    
    return n & mask;
}
