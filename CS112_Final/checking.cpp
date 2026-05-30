#include <iostream>
using namespace std;

void withdraw(int &Pin, double& amount  ){
    cout<<"Enter 4-digit Pin."<<endl;
    cin>>Pin;
if ( Pin != 1234){
    for(int i=1 ; i<3 ;i++){
        continue;
    }
}}
int main() {
    int Pin;
    double amount;
    withdraw(Pin , amount);
    return 0;
}