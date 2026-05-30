#include <iostream>
#include<queue>  // queue : FIFO : first in first out 
using namespace std;

int main() {
    queue<int> q1;

    q1.push(10);
    q1.push(20);
    q1.push(20000);
    q1.push(0.00);
  //q1.pop(); // pop removes the item at the front/first
  cout<<q1.front()<<endl;
  cout<<(!q1.empty() ? "Yes" : "No");

    
    return 0;
}