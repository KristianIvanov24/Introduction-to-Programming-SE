#include <iostream>

const size_t MAX_SIZE = 100;
const int FIELD_SIZE = 3;
const char EMPTY_CELL_VALUE = ' ';
const int WIN_LENGTH = 3;

void clearConsole()
{
    system("cls");
}

void init(char field[][FIELD_SIZE], char value)
{
    for (int i = 0; i < FIELD_SIZE; i++)
    {
        for (int j = 0; j < FIELD_SIZE; j++)
        {
            field[i][j] = value;
        }
    }
}

void printField(const char field[][FIELD_SIZE])
{
    for (int i = 0; i < FIELD_SIZE; i++)
    {
        for (int j = 0; j < FIELD_SIZE; j++)
        {
            std::cout << "[" << field[i][j] << "]";
        }
        std::cout << std::endl;
    }
}

bool areValidIndices(int x, int y)
{
    return x >= 0 && y >= 0 && x < FIELD_SIZE && y < FIELD_SIZE;
}

void inputMove(const char field[][FIELD_SIZE], int &x, int &y)
{
    std::cin >> x >> y;

    while (!areValidIndices(x, y) || field[x][y] != EMPTY_CELL_VALUE)
    {
        std::cout << "Invalind indices. Please enter a new move: ";
        std::cin >> x >> y;
    }
}

void changePlayer(char &current)
{
    current = current == 'X' ? 'O' : 'X';
}

int countCharsInDirection(const char field[][FIELD_SIZE], int x,
                          int y, int rowMove, int colMove)
{
    char ch = field[x][y];
    int count = 0;

    while (areValidIndices(x, y) && field[x][y] == ch)
    {
        count++;
        x += rowMove;
        y += colMove;
    }

    return count;
}

int countCharsInLine(const char field[][FIELD_SIZE], int x, int y, int rowMove, int colMove)
{
    return countCharsInDirection(field, x, y, rowMove, colMove) +
           countCharsInDirection(field, x, y, -rowMove, -colMove) - 1;
}

bool isWinningMove(const char field[][FIELD_SIZE], int x, int y)
{
    return countCharsInLine(field, x, y, 1, 0) == WIN_LENGTH ||
           countCharsInLine(field, x, y, 0, 1) == WIN_LENGTH ||
           countCharsInLine(field, x, y, 1, 1) == WIN_LENGTH ||
           countCharsInLine(field, x, y, 1, -1) == WIN_LENGTH;
}

void startGame()
{
    char field[FIELD_SIZE][FIELD_SIZE];

    init(field, EMPTY_CELL_VALUE);

    char currentPlayer = 'X';

    bool winner = false;
    int maxMoves = FIELD_SIZE * FIELD_SIZE;
    int currMoves = 0;
    int x, y;
    while (currMoves < maxMoves)
    {
        clearConsole();
        printField(field);

        inputMove(field, x, y);

        field[x][y] = currentPlayer;
        currMoves++;

        changePlayer(currentPlayer);

        winner = isWinningMove(field, x, y);

        if (winner)
        {

            break;
        }
    }

    changePlayer(currentPlayer);

    clearConsole();
    printField(field);

    if (winner)
    {
        std::cout << currentPlayer << " WINS!!!";
    }
    else
    {
        std::cout << "DRAW!!!";
    }
}

int main()
{
    startGame();
}
