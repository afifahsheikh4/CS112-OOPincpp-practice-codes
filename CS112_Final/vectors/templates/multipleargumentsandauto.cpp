#include <iostream>
using namespace std;

template <typename T>
T add(T a , T b){
    return a +b;
}


int main() {

auto result1 = add(5,5);
cout<<"Int : "<<result1<<endl;
auto result2 = add(3.14 , 5.67);
cout<<"Double : "<<result2<<endl;

auto result3 = add('a' , 'z'); // ti cannot add characters 
cout<<"Char : "<<result3<<endl;



    
    return 0;
}