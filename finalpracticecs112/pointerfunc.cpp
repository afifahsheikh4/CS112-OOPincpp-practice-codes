#include <iostream>
using namespace std;

int *func(){
   int a =10;
   int *ptr = new int (a); // allocating memory adress of a to 
  cout<<"Main function executing "<<endl;

   // pointer ptr 
   return ptr;



}

int main() {
   int *result =func(); // func call 
   cout<<*result ; 
   
   delete result; // cleanup the memory
   result = nullptr;// throw away the key
   return 0;
}