#include <iostream>
using namespace std;

class Easyscene{
private :
    int x ;
    int y ;
public:
    // default constructor 
    Easyscene(){}
    Easyscene(int a , int b ){
        x=a;
        y=b;
        cout<<"Parameterized constructor called\n ";
    }

    /// operator overloading 
    Easyscene operator + (Easyscene const &obj){
       // temporary variable 
       Easyscene temp;
          temp.x = x + obj.x;
          temp.y = y + obj.y;
          cout<<"Operator overloading \n ";
        
       return temp;
    }
    
   void print(){
    cout<<"Real + Imaginary (i)\n"<< x <<" + i"<<y<<endl;
   }

};
int main() {
    Easyscene e1(3,5);
    Easyscene e2(5,5);
    Easyscene e3 = e1 +e2; // operator overloading function will be called as we are adding 2 objects of a class 
    e3.print();
    return 0;
}