#include <iostream>

const char UPPER_TO_LOWER_DIFF = 'a' - 'A';

int main()
{
    char aStart, aEnd, bStart, bEnd;
    std::cin >> aStart >> aEnd >> bStart >> bEnd;

    // тук както и долу за самата буква
    // е хубаво да сме сигурни, че сме в lower case 
    // за да са ни по-прости проверките
    aStart += UPPER_TO_LOWER_DIFF;
    aEnd += UPPER_TO_LOWER_DIFF;

    char letter;
    std::cin >> letter;


    if (letter >= 'A' && letter <= 'Z') {
        letter += UPPER_TO_LOWER_DIFF;
    }

    bool inA = letter >= aStart && letter <= aEnd;
    bool inB = letter >= bStart && letter <= bEnd;

    bool inUnion = inA || inB;
    bool inIntersection = inA && inB;
    bool inDifference = inA && !inB;

    bool inOnlyOne = inUnion && !inIntersection;

    std::cout << inUnion << ", " << inIntersection << ", "
        << inDifference << ", " << inOnlyOne;
}