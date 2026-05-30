#include <iostream>
using namespace std;

class A {
    public:
    string name , address , city;

  A(string a , string b , string c){
    this->name =a;
   this->address =b;
    this->city =c;
  }

};

class B{
    private:
    A *a;  // has a relationship
    public: 
    int id ;
    string name;

    B(int i , string n , A *a) { // member initilixer list
     this->id=i;
     this->name=n;
     this->a=a;


    }
    void display(){
        cout<<"Id : "<<id <<"  name : "<<name<<" pointer : "<< a->address;
    }

};


int main() {
    A a1("Afifah", "BWP","9-A");
    B b1(066, "hehe",&a1);
    b1.display();
    return 0;
}