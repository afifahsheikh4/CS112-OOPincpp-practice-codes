#include <iostream>
using namespace std;

int main() {
    cout<<"-----Pointer to a const value------\n";
    // int x =5;
    // int y=10;

    // direct initilization 
    int x{5};
    int y{10};


    const int *i = &x; // storing by reference means address only 
    const int *j = &y;
    
    cout<<"i : "<< i <<endl;
    cout<<"j : "<< j <<endl;

    cout<<"*i : "<< *i <<endl;
    cout<<"*j : "<< *j <<endl;
    
    
    
    return 0;
}