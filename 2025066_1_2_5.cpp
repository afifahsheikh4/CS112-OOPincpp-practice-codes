#include <iostream>
using namespace std;

// Recursive function to print characters in a single row
void printCols(int col, int n, int spaceStart, int spaceEnd) {
    if (col > 2 * n) {
        cout << endl;
        return;
    }

    // If the column is within the "hollow" range, print space.
    // Otherwise, print a star.
    if (col > spaceStart && col < spaceEnd) {
        cout << " ";
    } else {
        cout << "*";
    }

    printCols(col + 1, n, spaceStart, spaceEnd);
}

// Recursive helper to handle row progression
void diamondHelper(int row, int n) {
    if (row > 2 * n) return;

    int spaceCount;
    
    // Top half (rows 1 to n)
    if (row <= n) {
        spaceCount = (row - 1) * 2;
    } 
    // Bottom half (rows n+1 to 2n)
    else {
        spaceCount = (2 * n - row) * 2;
    }

    // Calculate where the spaces begin and end for this row
    // We want the spaces to be centered
    int spaceStart = n - (spaceCount / 2);
    int spaceEnd = n + (spaceCount / 2) + 1;

    printCols(1, n, spaceStart, spaceEnd);
    diamondHelper(row + 1, n);
}

// Final function as per your prototype
void printHollowDiamond(int n) {
    if (n <= 0) return;
    diamondHelper(1, n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printHollowDiamond(n);
    return 0;
}
