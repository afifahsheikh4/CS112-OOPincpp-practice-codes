#include <iostream>
using namespace std;

class Gate; //it will tell the compiler that class gate will exists

class User{
    private:
      string secretpassword;
      public:
     // friend func for user class 
     friend void authenticate(User, Gate  ){
        }
       
    };
    // out of line initlization of member func 
 void authenticate(User& u , Gate& g ){
    if (u.secretpassword==g.gatekey){
        cout<<"---Acess Granted---"<<endl;
      }
      else {
        cout<<"---Intruder Alert---"<<endl;
      }

    }
 Gate{
    private:
    string gatekey;
public:
    //friend func for gate class 
    friend void authenticate(User , Gate ){
     
} } ;  
// out of line initlization of member func 
 void authenticate(User u , Gate g ){
    if (u.secretpassword==g.gatekey){
        cout<<"---Acess Granted---"<<endl;
      }
      else {
        cout<<"---Intruder Alert---"<<endl;
      }

    }

int main() {
    // creating objects of both classes 
    User u ;
    authenticate("Hello" , "world");
    Gate g;
   // authenticate("Hello" , "Hello");
    
    return 0;
}
