#include <iostream>
using namespace std;

class A{

    public:

    void virtual func(){

        cout<<"A's function"<<endl;
    }


};

class B: public A{

    public:

   virtual void func(){

        cout<<"B's function"<<endl;
    }



};

class C:public A{

   public:

   virtual void func() override {

        cout<<"C's function"<<endl;
    }

};

int main() {

    A *ptr1;

    C b;

    ptr1=&b;

    ptr1->func();


    
    return 0;
}