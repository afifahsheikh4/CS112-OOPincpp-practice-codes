#include <iostream>
#include<stack>
using namespace std;





int main() {

    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);


     while(!s1.empty()){
       cout<< s1.top()<<" ";
    
        s1.pop();
        cout<<endl;
    }

    // while(s1.size () >1 ){
      
    //     s1.pop(); // pop removes elements/ values 
    // }
    //   cout<<"First element added was : " <<s1.top()<<endl;

    // //cout<<"Size of s1 : "<<s1.size()<<endl;
   
    return 0;
    }