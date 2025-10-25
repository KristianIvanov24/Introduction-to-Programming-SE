#include <iostream>

int main () {
    char setAStart, setAEnd, setBStart, setBEnd, letter;
    std::cin >> setAStart >> setAEnd >> setBStart >> setBEnd >> letter;

    setAStart += ('a' - 'A');
    setAEnd += ('a' - 'A');
    if (letter < 'a')
        letter += ('a' - 'A');

    if (setAStart > setAEnd)
    {
        setAStart += setAEnd;
        setAEnd = setAStart - setAEnd;
        setAStart -= setAEnd;
    }
    if (setBStart > setBEnd)
    {
        setBStart += setBEnd;
        setBEnd = setBStart - setBEnd;
        setBStart -= setBEnd;
    }

    bool isInUnion = false, isInIntersection = false, isInDifference = false;

    if ((letter >= setAStart && letter <= setAEnd) || (letter >= setBStart && letter <= setBEnd))
        isInUnion = true;

    if (letter >= setAStart && letter <= setAEnd && letter >= setBStart && letter <= setBEnd)
        isInIntersection = true;

    if (letter >= setAStart && letter <= setAEnd && !(letter >= setBStart && letter <= setBEnd))
        isInDifference = true;

    std::cout << isInUnion << " " << isInIntersection << " " << isInDifference << " " << (isInUnion && !isInIntersection) << std::endl;

    return 0;
}