#include <iostream>
using namespace std;

template <typename T , typename T1>

void swap1(T &a , T1 &b){
 auto c=a ;
 a = static_cast<T>(b);
 b = static_cast<T1>(c);


}

int main() {
 int a = 5 ;
 int b = 10;
 

 cout<<"------BEFORE------ \na : "<<a <<"  b : "<<b<<endl; 
 swap1(a,b);
  cout<<"------AFTER------ \na : "<<a <<"  b : "<<b<<endl; 
 
    return 0;
}