#include <iostream>
#include<stack>
using namespace std;

int main() {
    // creating stack of string 
    stack<string> colors ;

    // push elements into stack 
    colors.push("Orange");
    colors.push("Blue");

    cout<<"Stack : ";
    // first element of the stack 
    while(!colors.empty()){
        cout<<colors.top()<< " , ";
        colors.pop();
    }
    return 0;
}