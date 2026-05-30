#include <iostream>
using namespace std;

// to print spaces as for the upper part of trainglespaces decreases from row till mid 
//for lower pattern spaces increases from mid to end 

void printSpaces(int spaces)
{
    if(spaces <= 0)
        return;

    cout << " ";
    printSpaces(spaces - 1);
}


void PrintPattern1(int start, int end)
{
    // base case 
    if(start > end)
        return;
    int mid = (1 + end) / 2;

    // initliazing spaces on the bases of distance from middle 
    int spaces = abs(start - mid); // abs means absolute : always +ve

    printSpaces(spaces);
    cout << "*" << endl;

    // recursive call (next row)
    PrintPattern1(start + 1, end);
}

int main()
{
    
    PrintPattern1(1,9);
}