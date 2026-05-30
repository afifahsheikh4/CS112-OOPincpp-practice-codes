#include <iostream>
#include<string>
using namespace std;

// friend class: declared inside the class that is
// granting acess
/*
Friendship is not mutual — if A is a friend of B, B is not automatically a friend of A.
Friendship is not inherited — derived classes do not automatically inherit friendship.
Should be used sparingly to maintain encapsulation.


*/

class Auditor;

class BankAccount{
   private:
     double balance = 1000.0;
     string pin = "1234";
   
    public:
    BankAccount(double b = 1000.0) : balance(b){}
    
    //  friend function
    friend void transferTax( BankAccount& obj);

    // friend class author
    /* 
     means bankaccount class is granting its 
     access of its private and public data members 
     to author class  
    */
    friend class Auditor;

};

  // friend func definition : acessing private data member
   void transferTax( BankAccount& obj){
     obj.balance= obj.balance * 0.95;
     cout<<"Tax deducted! \nNew balance : "<<obj.balance<<endl;
      
  }
class Auditor{
   public:
    Auditor(){} // default constructor 
     bool verifyPin(BankAccount& obj , string inputPin){
        return obj.pin==inputPin;
     }

     double checkBalance(BankAccount& obj){
        return obj.balance;
     }
};


int main() {
    BankAccount account(10000);
    
    cout<<"===Testing Friend Function==="<<endl;
    // call friend func
    transferTax(account);

    cout<<"==== Testing Friend class ===="<<endl;
    Auditor a; // only default constructor will be called
    bool result1 = a.verifyPin(account , "1234");
    cout<<"Verifying pin 1234 : "<<(result1 ? "Access Granted" : "Access denied") <<endl;
     


    bool result2= a.verifyPin(account,"99999");
    cout<<"Verifying pin 9999 : "<< (result2 ? "Access Granted" : "Acess denied")<< endl;
   cout<<"\nAuditors balance check : Rs. "<<a.checkBalance(account);

    return 0;
}
