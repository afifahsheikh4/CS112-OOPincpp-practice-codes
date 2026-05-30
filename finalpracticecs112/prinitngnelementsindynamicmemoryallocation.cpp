#include <iostream>
using namespace std;

int main() {
    int *nptr; // pointer 
    // allocating dynamic memory 

    nptr = new int[5]{12,23,34,45,56};
    cout<< *nptr <<endl; // derefering of pointer 
  
  // without derefering it will print address  
    cout<<"*Nptr : "<<nptr<<endl;

 delete []nptr;

 for(int i=0; i<5 ; i++){
  nptr=nullptr;
 cout<<"Nptr  : "<<nptr[i]<<endl;
 }


    return 0;
}