#include <iostream>
#include <cstdio>
#include <cdstring>
#include <cstdlib>

using namespace std;

#define empty 0
#define N 9

bool isGridsafe (int grid [N][N], int &row, &col);
/* assign values to all the zero (not assigned) values for Sudoku
    solutions */
bool SolveSudoku (int grid [N][N])
{
    int row, col;
    if (!isEmptyLocation(grid, row, col))
        return true;
    for (int num = 1; num <= 9; num++)
    {
        

    }


}
