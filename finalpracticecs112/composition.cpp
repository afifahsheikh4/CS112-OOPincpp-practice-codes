#include <iostream>
using namespace std;


class A {
    public :
    string name ;
    A(string n ): name(n){}




};
class B {
    public:
    string city;
  A a;
  B() : a("Afifah"){}


};
int main() {
    B b;
    b.city="Swabi";
   cout<<"Value : "<<b.city;



    return 0;
}