#include <iostream>

int main () {
    char figure, startPosCol, startPosRow, endPosCol, endPosRow;
    std::cin >> figure >> startPosCol >> startPosRow >> endPosCol >> endPosRow;

    if (startPosCol < 'a' || startPosCol > 'h' || startPosRow < '1' || startPosRow > '8')
    {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    int rowMoves = abs(startPosRow - endPosRow), colMoves = abs(startPosCol - endPosCol);
    bool isValid = false;

    switch (figure)
    {
    case 'P':
    {
        if (colMoves == 0 && rowMoves == 1)
            isValid = true;
        break;
    }
    case 'K':
    {
        if ((colMoves == 2 && rowMoves == 1) || (colMoves == 1 && rowMoves == 2))
            isValid = true;
        break;
    }
    case 'B':
    {
        if (colMoves == rowMoves)
            isValid = true;
        break;
    }
    case 'R':
    {
        if ((startPosCol == endPosCol && startPosRow != endPosRow) || (startPosRow == endPosRow && startPosCol != endPosCol))
            isValid = true;
        break;
    }
    case 'Q':
    {
        if (colMoves == rowMoves || (startPosCol == endPosCol && startPosRow != endPosRow) || (startPosRow == endPosRow && startPosCol != endPosCol))
            isValid = true;
        break;
    }
    case 'X':
    {
        if (rowMoves <= 1 && colMoves <= 1)
            isValid = true;
        break;
    }
    default:
    {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }
    }

    std::cout << (isValid ? "Valid move" : "Invalid move") << std::endl;
    return 0;
}