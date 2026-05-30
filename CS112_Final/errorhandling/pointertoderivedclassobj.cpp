#include <iostream>
using namespace std;

class Base{

    public:

    void show(){

        cout<<"Base class function"<<endl;
    }
};

class Derived: public Base{

    public:

    void show(){
        cout<<"This is Derived class function"<<endl;

    }
};

int main() {

    Derived *ptr1;

    Base obj1;

   // ptr1=&obj1;

    ptr1->show();
    
    return 0;
}