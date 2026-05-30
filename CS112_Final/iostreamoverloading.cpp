#include <iostream>
using namespace std;

class Distance{
 private :
   int feet ;
   int inches ;
 public:

 // default constructor 
  Distance(){}
   Distance(int f , int i){
    feet =f;
    inches =i;
    cout<<"Constructor called \n";
   }  

   // overloading of ostream : stream insertion 
    friend ostream &operator <<(ostream &out , const Distance &d){
      out<<"Feet : "<<d.feet <<" Inches : "<<d.inches<<endl; 
      return out;
    }
    
    // stream exertion
    friend istream &operator >>( istream &in ,  Distance &d){  // ----remember no const 
        in >> d.feet >> d.inches;
        return in;
    }

};

int main() {
  Distance d1(4,5);
  Distance d2(7,8);
  Distance d3;
  
   cout<<"d3 : "<<endl;
   cin>>d3;
   cout<<"d 1 : "<<d1 <<endl;
   cout<<"d 2 : "<<d2 <<endl;
   cout<<"d 3 : "<<d3 <<endl;
    
    return 0;
}