#include <iostream>
using namespace std;

/* -------- COLUMN RECURSION -------- */
void printCol(int row, int col, int n, int m)
{
    // total number of columns = left half + centre bar + right half
    int totalCols = 2 * m + 1;

    // base case: when we've printed all columns for this row
    if (col >= totalCols)
        return;

    int mid = m;   // index of the vertical bar '|'

    if (col == mid)               // centre column
        cout << "|";
    else {
        // distance from the diamond’s centre along row/column
        int dRow = abs(n - row);
        int dCol = abs(mid - col);

        if (dCol == n - dRow)    // on the boundary of the diamond
            cout << "#";
        else if (dCol < n - dRow) // strictly inside the diamond
            cout << "*";
        else                     // outside the diamond
            cout << ".";
    }

    // recurse to next column
    printCol(row, col + 1, n, m);
}

/* -------- ROW RECURSION -------- */
void printRow(int row, int n, int m)
{
    // finished all 2n+1 rows?
    if (row >= 2 * n + 1)
        return;

    printCol(row, 0, n, m);
    cout << '\n';

    // recurse to next row
    printRow(row + 1, n, m);
}

/* -------- REQUIRED FUNCTION -------- */