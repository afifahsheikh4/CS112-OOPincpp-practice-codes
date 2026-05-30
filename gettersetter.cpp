#include <iostream>
using namespace std;
// class 
class Scholarship{
private :
    double unigpa; // declare 
   // unigpa =3.0; // initialize 
    double govgpa;
   // govgpa =2.5; // it will nit be changed 
public:
// constructor (on what crieteria uni wamts to give scholarship)
// just declartion is done in it 
Scholarship(double ug ){ // starting value 
    ug= unigpa; // ug is paarmeter receiving value but when it comes insode { compiler sees ug has already a valuue i.e = unigpa so it works from rigt to left and overwrite unigpa with value passed in argument i.e 3
};
//2 . Setter : if certain conditions are meet and he wants to change room
 void checkunigpa(double ug){
 if (ug >2.5){
    cout<<" Setter will change private unigpa  "<<endl;
    unigpa = ug;
}
}
// 3. getter : will see changed gpa
double getunigpa() { // declaring space for changed value 
return unigpa;
}
};
 
int main() {
   // int ug= 3.0;
    //  constructor 
    Scholarship gpa(3.76); // here gpa is like an obj caller 
    // setter 
    gpa.checkunigpa(2.5); // will change that 3.0 gpa by uni to 2.5 (changing private object 
    // getter 
    double result=gpa.getunigpa(); // show changed gpa 
    cout<<result;
    return 0;
}
