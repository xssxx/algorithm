#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    rows++; // เผือที่ไว้บล็อกนึงล่างสุด

    char grid[rows][cols];

    // initialize grid and bricks
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            char ch;
            cin >> ch;
            grid[row][col] = ch;
        }
    }

    // get falling block
    int block[cols];
    for (int i = 0; i < cols; i++) {
        int col;
        cin >> col;
        block[i] = col; 
    }

    // calculate block dropping
    for (int i = 0; i < cols; i++) {
        int row = 0;

        while (1) {
            if (grid[row][i] == '.' && row < rows - 1) {
                row++;
            } else {
                grid[row - 1][i] = '#';
                row = 0;
                break;
            }
        }
    }

    for (int row = 0; row < rows - 1; row++) {
        for (int col = 0; col < cols; col++) {
            cout << grid[row][col];
        }
        cout << '\n';
    }

    return 0;
}