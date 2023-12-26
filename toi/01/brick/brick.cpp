#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    char grid[rows][cols];
    int bricks[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> grid[i][j];

    for (int i = 0; i < cols; i++)
        cin >> bricks[i];

    // up->down -> left->right
    for (int i = 0; i < cols; i++) {
        while (bricks[i] > 0) {
            int j;
            for (j = 0; j < rows; j++) {
                if (grid[j][i] == '#' || grid[j][i] == 'O')
                    break;
            }
            if (j > 0)
                grid[j-1][i] = '#';
            bricks[i]--;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j];
        }
        cout << '\n';
    }

    return 0;
}