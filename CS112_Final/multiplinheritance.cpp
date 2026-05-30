#include <iostream>
using namespace std;

class GrandFather{
public:
    GrandFather(){
        cout<<"Grand father's constructor is called\n";
    }
    ~GrandFather(){
        cout<<"Grandfather's destructor is called\n";
    }


};
class Father{
public:
    Father(){
        cout<<"Father's constructor is called\n";
    }
    ~Father(){
        cout<<"Father's destructor is called\n";
    }


};
class Child: public GrandFather , public Father{
public:
    Child(){
        cout<<"Child's constructor is called\n";
    }
    ~Child(){
        cout<<"Child's destructor is called\n";
    }



};

int main() {
    // making objects
    Child c ;

    
    return 0;
}