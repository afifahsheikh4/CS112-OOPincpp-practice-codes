#include <iostream>
using namespace std;

// custom exception classes: empty class created to 
// represent specific exception
class NegativeAmount{};
class InsufficientFunds{};
class ExceedDailyLimit{};
class InvalidPin{};
class CardBlocked{};

// global constants 

double withdrawcount = 0;//it will keep on addinghow much money u have withdrawed it now 
double withdrawlimit= 50000; // u cannot with draw more than this in one day

class Account{
double balance;    
public:

// constructor 
Account(int b): balance(b){} // member initlizerlist



void withdraw(int &Pin, double &amount ){ // passing by reference so we can chaneg thier value 
int attempts =0;
while(Pin!=1234 && attempts <3){
    attempts++;
            if (attempts < 3) {
                cout << "Wrong PIN! Attempt " << attempts << " of 3" << endl;
                cout << "Enter 4-digit Pin again: ";
                cin >> Pin;
            }
}
if(Pin!=1234){
    throw CardBlocked();
}
           
  

// amount is the thing  he wants to withdraw now 
if (amount >balance ){
    throw ExceedDailyLimit(); // exception
    
}
if(amount <0 || amount ==0){
    throw NegativeAmount();
}

// insufficient funds 
if(amount > balance){
    throw InsufficientFunds();
}
    cout<<"----with Drawal sucessfull,,YAYYYYYYY---"<<endl;
    // if it has passed all the conditions then 
    withdrawcount+=amount;
    cout<<"With draw count is : "<<withdrawcount<<endl;
    // after withdrawing amount
    double after= balance - amount;
    cout<<"Balance after with drawal : "<<after<<endl;
}
};
int main() {
    Account a(1000000);
    int Pin;
    double amount;
    cout<<"=====First with draw ======\n";
    
    cout<<"Enter 4-digit Pin."<<endl;
    cin>>Pin;
    cout<<"Enter amount you want to withdraw : ";
    cin>>amount;
    try{
         a.withdraw(Pin , amount); // calling with draw function
     
     }
    catch(InvalidPin){
        cout<<"Error : Invalid Pin\n";
    }
    catch (CardBlocked){
      cout<<"Error : Due to more than 3 tries card has been blocked\n";
    }
    catch(ExceedDailyLimit){
        cout<<"Error : Today's Limit has been exceed\n";
    }
    catch(InsufficientFunds){
        cout<<"Error : Insufficient balance\n";
    }
    catch(NegativeAmount){
        cout<<"Error : Negative amount\n";
    }
   
   
   
    cout<<"=====Second with draw ======\n";
    
    cout<<"Enter 4-digit Pin."<<endl;
    cin>>Pin;
    cout<<"Enter amount you want to withdraw : ";
    cin>>amount;
     try{
         a.withdraw(Pin , amount); // calling with draw function
     
     }
    catch(InvalidPin){
        cout<<"Error : Invalid Pin\n";
    }
    catch (CardBlocked){
      cout<<"Error : Due to more than 3 tries card has been blocked\n";
    }
    catch(ExceedDailyLimit){
        cout<<"Error : Today's Limit has been exceed\n";
    }
    catch(InsufficientFunds){
        cout<<"Error : Insufficient balance\n";
    }
    catch(NegativeAmount){
        cout<<"Error : Negative amount\n";
    }
    catch(...){
      cout<<"Some other error\n";
    }
    return 0;
}