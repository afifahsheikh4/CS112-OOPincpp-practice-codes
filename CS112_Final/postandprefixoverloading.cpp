#include <iostream>
using namespace std;

class Count{
    int counter ;
      public:
       // default constructor
       Count(){}
        //  constructor 
        Count(int c ){
            counter =c;
            cout<<"Constructor called \n";
        }
        // getter func to get the value of count
        int get_Count(){
            return counter;
        }
     /// overlaoding of prefix 
     Count operator++(){
        Count temp;
         temp.counter = ++counter;
         return temp;
        
     }
    
   
     // postfix 
     Count operator ++(int){
        Count temp;
        temp.counter = counter++;
        return temp;
     }
   

};

int main() {
    Count c1(5);
    Count c2(9);
    
    c2 = c1++;
    cout<<"-------Postfix ------\nc1 =5 , c1++ : "<<c2.get_Count()<<endl;
    c1 = ++c2;
    cout<<"-------Prefix--------\nc2 =9, ++c2 : "<<c1.get_Count();

    
    return 0;
}