#include <iostream>
using namespace std;

class Base {};
class Derived : public Base{};




int main() {
    Base *base = new Derived;
    Derived *derived;
    derived = static_cast<Derived*>(base);

    if(derived != nullptr){
        cout<<"Static casting successful"<<endl;
    }
    else {
        cout<<"Not successful";
    }
    
    return 0;
}