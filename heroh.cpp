#include <iostream>
using namespace std;

int fact(int n){
if (n==0 || n==1 ){  // base case 
return 1 ;    
}

return n*fact(n-1);
}
int main() {
 int n;
 cout <<" Enter any number : ";
 cin>>n;
  
    return 0;
}
