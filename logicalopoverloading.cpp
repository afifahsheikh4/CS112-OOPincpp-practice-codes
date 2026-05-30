#include <iostream>
using namespace std;

class Logical{
bool state;

public: 
  //default constructor
  Logical(){
    state=0;
    cout<<"default constructor"<<endl;
  }
  Logical (bool s): state(s){
    cout<<"Parameterized Constructor calling"<<endl;
  } // mmeber initlizer list
  // overloading function
  bool operator!() {
    cout<<"Overloading constructor calling"<<endl;
    return !state;
  }

};
int main() {
     //obj 
     Logical obj(true);
     Logical obj1(false);
     if(!obj ){ // call obj.operator()
        cout<<"False"<<endl;
        cout<<"obj calling"<<endl;
     }
     if(!obj1 ){ // call obj.operator()
        cout<<"False"<<endl;
        cout<<"obj calling"<<endl;
     }
     
     
     
    return 0;
}
