#include <iostream>
using namespace std;

int main() {
    cout<<"---Difference btw pointers and references---\n";
    int x=10;
    int *p =&x; // pointer to x

    int &r = x;  //x modifies pointer
       cout<<"Value of x : "<<x << endl;
       cout<<"Value of *p : "<<*p << endl;

       *p = 20;
       cout<<"After modifying value *p : "<<*p << endl;
       cout<<"Value of r : "<<r << endl;

       r=30;
       cout<<"Modified value of r : "<<r<<endl;
    return 0;
}