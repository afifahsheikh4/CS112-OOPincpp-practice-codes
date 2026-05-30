#include <iostream>
using namespace std;


/* reference is  just the other name of the variable
unlike pointer it doesnto store address which need dereference
to print


*/
void swap1(int &a , int &b){
  
int temp =a; // temporary variable 
  a=b;  // means a has now b's address
  b=temp; // and b has a's address ie stored in temp

   cout<<"a : "<< a<<endl;
   cout<<"b : "<<b <<endl;
}
int main() {
    int a ,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin >>b;
    
    swap1(a,b);
    return 0;
}