#include <iostream>
using namespace std;

void swap1(int *a , int *b){
    
int temp= *a ; // temporary variable stores the value of a
*a = *b ; 
*b = temp;


cout<<"Value of *a : "<<*a << endl;
cout<<"Value of *b : "<<*b <<endl;
}

int main() {
    int a;  // declaration only 
    int b;
   cout<<"Enter a: ";
   cin>>a;
   cout<<"Enter b : ";
   cin>>b;
    swap1(&a, &b);



    return 0;
}