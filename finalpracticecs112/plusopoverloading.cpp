#include <iostream>
using namespace std;


class Complex{
    public :
    int real ;
    int imag;

    Complex(){}
    Complex(int r , int i){
        this->real=r ;
        this->imag=i;
    }

    /// oerator overloading
    Complex operator +(Complex const &obj ){
     Complex temp;
     temp.real= this->real + obj.real;
     temp.imag = this->imag +obj.imag;
     return temp;


    }
    void display(){
        cout<<"Real : "<<real <<" + imag "<<imag;
    }
};
int main() {
    Complex c1(10,5) , c2(5,10);
    Complex c3= c1+c2;
    c3.display();
    
    return 0;
}