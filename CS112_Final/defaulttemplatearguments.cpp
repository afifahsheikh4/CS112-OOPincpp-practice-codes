#include <iostream>
using namespace std;


// below line is declaring placeholders for data types
template <typename T1 , typename T2 = double , typename T3 =string >

class Hello{
  public:
  /*  for undertsanding get this point that t is 
   a datatype
  */
   T1 x;
   T2 y ;
   T3 z;

   // constructors 
   Hello(T1 v1 , T2 v2 , T3 v3) : x(v1) , y(v2),z(v3){
    cout<<"\nConstructor executing "<<endl;
   }
  
   void getvalues(){
    cout<<"X : "<< x <<"  Y : "<<y <<" Z: "<<z<<2endl;
   }

};



int main() {
    Hello<int , float , string> intFloatStringHello(10,20.45,"Wdym");
    Hello<char> charDoubleStringHello('A' , 3.14 , "World");

    intFloatStringHello.getvalues();
    cout<<endl;
    charDoubleStringHello.getvalues();

    return 0;
}