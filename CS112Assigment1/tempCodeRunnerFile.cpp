#include <iostream>
using namespace std;

// Helping recursive function to print spaces instead of a 'for' loop
void PrintSpaces(int count) {
    if (count <= 0) return;
    cout << " ";
    PrintSpaces(count - 1);
}

void PrintPattern1(int start, int end) {
    // Base Case: stop when we reach the end of the range
    if (start > end) {
        return;
    }

    // 1. Calculate the midpoint to determine the "vertex" of the V
    int mid = (1 + end) / 2;
    int spaces = 0;

    // 2. Logic to determine indentation
    if (start <= mid) {
        // Upper half: spaces decrease as 'start' increases
        spaces = mid - start;
    } else {
        // Lower half: spaces increase as 'start' increases
        spaces = start - (mid + 1);
    }

    // 3. Print the row using recursion
    PrintSpaces(spaces);
    cout << "*" << endl;

    // 4. Recursive call for the next row
    PrintPattern1(start + 1, end);
}

int main() {
    // Calling the function as per the assignment example
    PrintPattern1(1, 10);
    return 0;
}
