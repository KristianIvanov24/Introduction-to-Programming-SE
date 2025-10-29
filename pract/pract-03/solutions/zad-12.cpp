#include <iostream>

const int BOARD_MIN = 1;
const int BOARD_MAX = 8;
const char BOARD_ROW_MIN_SYMB = '1';
const char BOARD_COL_MIN_SYMB = 'a';

const int PAWN_DOUBLE_MOVE_ROW = 2;

const char PAWN_PIECE = 'P';
const char KNIGHT_PIECE = 'K';
const char BISHOP_PIECE = 'B';
const char ROOK_PIECE = 'R';
const char QUEEN_PIECE = 'Q';
const char KING_PIECE = 'X';

int main()
{
    char piece, startPosFirstSymb, startPosSecondSymb, endPosFirstSymb,
        endPosSecondSymb;

    std::cin >> piece >> startPosFirstSymb >> startPosSecondSymb >> endPosFirstSymb >> endPosSecondSymb;

    // Normalize positions to numbers for easier logic handling
    int startCol = startPosFirstSymb - BOARD_COL_MIN_SYMB + 1;
    int startRow = startPosSecondSymb - BOARD_ROW_MIN_SYMB + 1;

    int endCol = endPosFirstSymb - BOARD_COL_MIN_SYMB + 1;
    int endRow = endPosSecondSymb - BOARD_ROW_MIN_SYMB + 1;

    // Precalculate some differences since we'll use them in most piece conditions
    int rowDiff = endRow - startRow;
    int colDiff = endCol - startCol;
    int rowDiffAbs = rowDiff < 0 ? -rowDiff : rowDiff;
    int colDiffAbs = colDiff < 0 ? -colDiff : colDiff;

    // Check if start and end positions are on the board
    bool validStart = startRow >= BOARD_MIN && startRow <= BOARD_MAX
                      && startCol >= BOARD_MIN && startCol <= BOARD_MAX;
    bool validEnd = endRow >= BOARD_MIN && endRow <= BOARD_MAX
                    && endCol >= BOARD_MIN && endCol <= BOARD_MAX;

    bool valid = false;
    bool err = false;
    if (!validStart)
    {
        std::cout << "Invalid start position!" << std::endl;
        err = true;
    }
    else if (!validEnd)
    {
        std::cout << "Invalid end position!" << std::endl;
        err = true;
    }
    else if (startCol == endCol && startRow == endRow)
    {
        std::cout << "Piece stayed in place!" << std::endl;
        err = true;
    }
    else if (piece == PAWN_PIECE)
    {
        bool isValidCol = startCol == endCol;
        bool isValidRow = rowDiff == 1;
        bool isValidDoubleRow = rowDiff == 2 && startRow == PAWN_DOUBLE_MOVE_ROW;

        valid = isValidCol && (isValidRow || isValidDoubleRow);
    }
    else if (piece == KNIGHT_PIECE)
    {
        bool isLongLMove = rowDiffAbs == 2 && colDiffAbs == 1;
        bool isShortLMove = rowDiffAbs == 1 && colDiffAbs == 2;

        valid = isLongLMove || isShortLMove;
    }
    else if (piece == BISHOP_PIECE)
    {
        bool isDiagonalMove = rowDiffAbs == colDiffAbs;

        valid = isDiagonalMove;
    }
    else if (piece == ROOK_PIECE)
    {
        bool isHorizontalMove = rowDiff == 0;
        bool isVerticalMove = colDiff == 0;

        valid = isHorizontalMove || isVerticalMove;
    }
    else if (piece == QUEEN_PIECE)
    {
        bool isDiagonalMove = rowDiffAbs == colDiffAbs;
        bool isHorizontalMove = rowDiff == 0;
        bool isVerticalMove = colDiff == 0;

        valid = isDiagonalMove || isHorizontalMove || isVerticalMove;
    }
    else if (piece == KING_PIECE)
    {
        bool isOneAnyDirectionMove = rowDiffAbs <= 1 && colDiffAbs <= 1;

        valid = isOneAnyDirectionMove;
    }
    else
    {
        std::cout << "Invalid piece!";
        err = true;
    }

    if (!err)
    {
        std::cout << (valid ? "Valid move" : "Invalid move") << std::endl;
    }

    return 0;
}