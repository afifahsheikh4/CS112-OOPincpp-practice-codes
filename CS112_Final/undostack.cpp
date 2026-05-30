#include <iostream>
#include<stack>
using namespace std;

int main() {

    stack <string> undo;
    string CT  = "";

    undo.push(CT);

    CT ="Hello";
    undo.push(CT);

    CT ="Hello World";
    undo.push(CT);

    cout<<"Before pressing CTRL Z : "<< undo.top()<<endl;

    undo.pop();
    cout<<"After 1st press : "<<undo.top()<<endl;

    undo.pop();
    cout<<"After 2nd press : "<<undo.top()<<endl;


     undo.pop();
    cout<<"After 3rd press : "<<undo.top()<<endl;









    return 0;
}