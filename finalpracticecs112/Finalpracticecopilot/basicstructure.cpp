#include <iostream>
#include<string>
using namespace std;

int main() {
    string name ;
    cout<<"Enter your name :";
    cin >>name ;
    string *ptr ;

    // we have to write like array size with it in []
    ptr = new string [10];
    ptr = &name;  //here ptr has address of name 
    cout<<"Priniting name with pointers "<<endl;

    cout<<"Name : "<<*ptr;// *is derefering operator

    return 0;
}