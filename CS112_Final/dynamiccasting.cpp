#include <iostream>
using namespace std;

class Base {
    int x ;
    public:
   

     Base(){
        cout<<"Base constructor executed!\n";
     }
     virtual void show(){}
};
class Derived : public Base{
    int y;
    public:
    
    Derived( ){
        cout<<"Derived constructor executed! \n";
    }
};
int main() {
    //derived's obj
    Derived d;
    Base* ptr= &d ; // base pointer = derived's object
    Derived *d2= dynamic_cast<Derived*>(ptr);
    if(d2==nullptr){
        cout<<"Dynamic casting failed! \n";

    }
    else{
        cout<<"Dynamic casting successful";
    }

    
    return 0;
}