#include <iostream>
using namespace std;

class A{
    int i ;
};
class B {
    public:
    int x , y;
    // constructor 
    B(int a , int b){
        x=a;
        y=b;
    }

    int result() {
        return x+y;
    }
};



int main() {
    A a ;
    B *b;
    b=(B*)&a;

    cout<<"dont know what is happening but something is happening :(\n";
    cout<<b->result();
    
    return 0;
}