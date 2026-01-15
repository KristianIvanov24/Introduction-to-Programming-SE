#include <iostream>
using namespace std;

void freeMatrix(bool** matrix, size_t size) {
    for (size_t i = 0; i < size; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
}

bool isInMatrix(int rows, int cols, int x, int y) {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

const int DIRECTIONS = 4;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool canEscape(const bool* const* labyrinth, bool** visited, int rows, int cols, int x, int y) {
    if(!labyrinth || !visited) {
        return false;
    }

    if(!isInMatrix(rows, cols, x, y) || visited[x][y] || labyrinth[x][y]) {
        return false;
    }

    visited[x][y] = true;

    if(x == rows - 1 && y == cols - 1) {
        return true;
    }

    for(int i = 0; i < DIRECTIONS; i++) {
        if(canEscape(labyrinth, visited, rows, cols, x + dx[i], y + dy[i])) {
            return true;
        }
    }

    return false;
}

void printMatrix(const bool* const* matrix, size_t rows, size_t cols) {
    if (!matrix) {
        return;
    }

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    bool** labyrinth = new bool* [N];
    bool** visited = new bool* [N];

    for (size_t i = 0; i < N; i++) {
        labyrinth[i] = new bool[M];

        visited[i] = new bool[M] {0};

        for (size_t j = 0; j < M; j++) {
            cin >> labyrinth[i][j];
        }
    }

    cout << canEscape(labyrinth, visited, N, M, 0, 0) << endl << endl;

    //printMatrix(visited, N, M);

    freeMatrix(labyrinth, N);
    freeMatrix(visited, N);
}

/*
6 6
0 0 1 0 1 0
1 0 1 0 0 0
1 0 0 0 1 1
0 0 1 0 1 0
0 1 0 0 1 0
1 1 1 0 0 0
*/