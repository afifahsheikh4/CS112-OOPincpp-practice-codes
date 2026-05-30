#include <iostream>
using namespace std;

int main() {


    int size ;
    size =5 ;
   

    // dynamic memory can be allocated to a pointer only 
    int *ptr = new int [size];
    *ptr= 10;
    // for printing the value 
    cout<<"Pointer : "<< *ptr<<endl;

    // deleting the pointer 
   delete ptr ;  //we cannot use square brakets as
   /* there is no array 
   
   */  
   ptr = nullptr; // it is best practice to do it 
   /* but it is notcompulsory but still it is considered as best
   practice
   
   */
   

















    return 0;
}