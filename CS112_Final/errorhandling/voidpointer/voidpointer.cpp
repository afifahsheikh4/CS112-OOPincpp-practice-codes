// #include <iostream>
// using namespace std;

// int main() {
//     int a =10;

//     void* ptr = &a;// her epointer conatins the address of a
    
//     cout<<"A : "<<a<<endl;
//     cout<<"ptr : "<<ptr<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int* ptr ;
    int f =90;
    
    ptr = &f ;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    return 0;
}