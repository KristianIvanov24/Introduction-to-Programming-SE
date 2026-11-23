#include <iostream>

const int SIZE = 10;

/*
Задача 2: Напишете функция, която установява дали
масива е симетричен относно главния си диагонал.

Вход: 4
1 2 3 4
2 5 6 7
3 6 8 9
4 7 9 0

Изход: yes

Вход: 3
1 2 3
2 5 8
3 1 9

Изход: no
*/

bool isSymmetric(int matrix[][SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                return false;
        }
    }

    return true;
}
