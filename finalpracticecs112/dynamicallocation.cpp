#include <iostream>
using namespace std;






int main() {
    
int *ptr = new int[10];
*(ptr +2)=10;
cout<< *(ptr +2)<<endl;
// acess the 3rd element in the array 
delete[] ptr;
ptr = NULL;
cout<<ptr;

    return 0;
}