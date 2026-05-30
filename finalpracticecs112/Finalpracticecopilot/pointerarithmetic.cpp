#include <iostream>
using namespace std;

int main() {
    double *ptr= new double [5] {1,2,3,4,5};
     //cout<<"*ptr : "<<*ptr<<endl;
     cout<<"*ptr 1  : "<< (*ptr +1) <<endl;
     cout<<"*ptr 2: "<< (*ptr +2 )<<endl;
     cout<<"*ptr 3 : "<< (*ptr +3 )<<endl;
     cout<<"*ptr 4 : "<< (*ptr +4 )<<endl;
     cout<<"*ptr 5 : "<< (*ptr + 5)<<endl;
     

    return 0;
}