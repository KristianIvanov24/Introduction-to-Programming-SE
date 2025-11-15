#include <iostream>

const int SIZE = 10;

/*
Задача 3: Триъгълна матрица наричаме такава
квадратна матрица, която има само нули под или
над главния или вторичния си диагонал.
Даден е двумерен масив с nxn елемента.
Да се напише функция, която проверява
дали дадена матрица е триъгълна.

Вход: 4
1 2 3 4
0 5 6 7
0 0 8 9
0 0 0 10

Изход: yes

Вход: 4
3 0 0 0
4 5 0 0
6 7 8 0
9 1 2 3

Изход: yes

Вход: 3
1 2 0
0 5 3
4 0 9

Изход: no
*/

bool isTriangular(int matrix[][SIZE], int n)
{
    bool upper = true; // нули под диагонала
    bool lower = true; // нули над диагонала

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j && matrix[i][j] != 0) 
                upper = false;
            
            if (i < j && matrix[i][j] != 0) 
                lower = false;
        }
    }

    return upper || lower;
}