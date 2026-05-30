#include <iostream>
using namespace std;

class Base {
  int feet ;
  int inches ;  
public:
  Base(){} // default constructor 
  // parameterized constructor 
  Base(int f , int i ){
    feet = f ;
    inches = i ;
  }
   /// overloading
   bool operator >(const Base &obj){
    cout<<"Overloading operator called \n";
     if (feet > obj.feet){
        return true ;
     }
     else if(inches == obj.inches && feet == obj.feet){
        return false;}

     return false ;
   
   }

};



int main() {
    Base b1(5 , 8);
    Base b2(2,3);
    if( b1>b2){
        cout<<"b1 is greater \n";
    }
    else if (b2 >b1){
        cout<<"b2 is greater \n";
    }
    
    return 0;
}