#include <iostream>
using namespace std;

class Cbase {
    public:
  // necessary condition fo rdynamic is it must have 
  // virtual func
    virtual void dummy(){} // means polymorpism 
    // it will decide on run time to execute which 
    // func
};

class CDerived : public Cbase{
    public:
    int a ;
};
int main() {
  Cbase *pbase=new CDerived;
  CDerived *pd;
  pd = dynamic_cast<CDerived*>(pbase);
    if(pd!=nullptr){
        cout<<"Cast successful"<<endl;
    }
    else{
        cout<<"Cast unsuccessful";
    }
    delete pbase ;

    return 0;
}