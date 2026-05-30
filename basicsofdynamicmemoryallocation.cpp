#include <iostream>
using namespace std;

int fib(int n ){
// base case 
if (n==0 || n==1){
    return 1 ;
}

return fib(n-1) + fib(n-2);

}
int main() {
    int n =5;
  
    for(int i=0 ; i<5 ; i++){
        cout<<fib(i);
    }
    int result =fib(5);
cout<<"result "<<result ;
    return 0;
}
