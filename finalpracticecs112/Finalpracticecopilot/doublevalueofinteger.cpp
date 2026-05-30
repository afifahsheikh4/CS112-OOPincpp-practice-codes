#include <iostream>
using namespace std;

void doubling(int  &p){
    cout<<"Doubled value : "<<p*p;

}



int main() {
    int a;
    cout<<"Enter any number : ";
    cin>>a;


    doubling(a);
    return 0;
}