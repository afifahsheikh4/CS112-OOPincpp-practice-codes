#include <iostream>
using namespace std;

int main() {
    int size;
   // int x=10;
    int *ptr ;
// allocating dynamci memory to a pointer 
   
    cout<<"Size : ";
    cin>>size;
 ptr = new int [size];
  for(int i= 0 ; i< size ; i++){
        cin>> ptr[i];
    }
    for(int i= 0 ; i< size ; i++){
        cout<<"i : "<< *(ptr +i)<<endl;
    }

    delete[] ptr;
    ptr = nullptr;
    return 0;
}