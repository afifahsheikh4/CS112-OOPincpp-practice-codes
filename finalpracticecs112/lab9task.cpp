#include <iostream>
using namespace std;


class Base{
        public:
     void getdata(){
        cout<<"Base class"<<endl;
     }
    
    
    
    };
 
class Derived: public Base{
        public:
       virtual void getdata(){
        cout<<"Base destructor\n";
        }
    };
int main() {
    
    Base *b;
    Derived d;
    b=&d;
    b->getdata();
   
    return 0;
}