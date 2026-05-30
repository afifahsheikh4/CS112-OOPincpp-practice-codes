#include <iostream>
using namespace std;

int main() {

    int n =10;
    float f = 25.67;
    char c = 'A';

    cout<<"----Void* can store address only of any data type's data : -----"<<endl;
    void* ptr ;
    ptr =&n;
    
    cout<<"n : "<<n <<endl;
    cout<<"ptr "<<ptr <<endl;
  //  cout<<"*ptr "<<*ptr <<endl;---- void* cannot store this 
 
  //becoz c++ only know the adress stored in the pointer
  //it dont know about data type stored there 
    
     ptr =&f;
    
    cout<<"f : "<<f <<endl;
    cout<<"ptr "<<ptr <<endl;

     ptr =&c;
    
    cout<<"c : "<<c <<endl;
    cout<<"ptr "<<ptr <<endl;
    
    
    
    
    return 0;
}