#include <iostream>
#include <cmath>     // for abs() function
using namespace std;

S
void printCol(int row, int col, int n)
{
    // Total columns in pattern
    // left side + middle '|' + right side
    int totalCols = 2*n + 1;

    // middle column index where '|' is printed
    int mid = n;

    //  base xase
    // stop when all columns are printed
    if(col >= totalCols)
        return;

    // willl pritn center line
    // always print '|' at middle column
    if(col == mid)
        cout << "|";
    else
    {
        // vertical distance from center row
        // tells how far we are from middle vertically
        int vDist = abs(row - mid);

        // horizontal distance from center column
        int hDist = abs(col - mid);

        int limit = n - vDist + 1;

        //  CHARACTER DECISION 
        // boundary of shape
        if(hDist == limit)
            cout << "#";

        // inside filled region
        else if(hDist < limit)
            cout << "*";
        else
            cout << ".";
    }
   
    printCol(row, col + 1, n);
}


void printRow(int row, int n)
{
    // Total rows (top to bottom symmetry)
    int totalRows = 2*n + 1;
    // base case 
    // stop after last row
    if(row >= totalRows)
        return;

    printCol(row, 0, n);

    cout << endl;
    // recursive call for next row
    printRow(row + 1, n);
}

void PrintPattern2(int n, int m)
{
    // pattern depends on n (center size)
    // recursion begins from first row
    printRow(0, n);
}



int main()
{
    int n, m;

    cout << "Enter n m: ";
    cin >> n >> m;

    PrintPattern2(n, m);
}
