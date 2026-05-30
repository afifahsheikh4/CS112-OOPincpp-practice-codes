#include <iostream>
using namespace std;

class A {
public:
    void show(int x) {
        cout << "A: " << x << endl;
    }
};

class B : public A {
public:
    void show(double x) {
        cout << "B: " << x << endl;
    }
};

int main() {
    B obj;

    obj.show(10);    
    obj.show(3.5);    
}