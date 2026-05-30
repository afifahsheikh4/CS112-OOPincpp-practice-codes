#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector <int > v1{1,2,3,4,5};

  // declare iterator 
  vector <int> :: iterator iter;

  // initlizing vector with first elelment 
  iter = v1.begin();

  // prinitng beigining of iterator 
  cout<<"Iter[0] = "<<*iter<<endl;

  //end of the vector 
  iter = v1.end() -1;
  cout<<"Iter[4] = "<<*iter<<endl;







    
    return 0;
}