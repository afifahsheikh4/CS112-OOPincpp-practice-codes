#include <iostream>
using namespace std;

class A{

    public:

    virtual void func(){

        cout<<"A's function "<<endl;
    }


};

class B: public A{

    public:
    void func(){

        cout<<" B's function "<<endl;
    }

    
};

class C: public B{
public:
   void func(){

        cout<<" C's function "<<endl;
    }
};

int main() {

    A *p1;

    C c1;

    p1=&c1;

    p1->func();


    
    return 0;
}