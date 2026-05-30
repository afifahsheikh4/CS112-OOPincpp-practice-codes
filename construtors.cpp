#include <iostream>
using namespace std;

class SecureVault{
    // data members : private i.e cannot be accessed outside func 
  int balance ;
  int amount;
  string userpassword;
  double newbalance;
  string ownerName;
  bool isOpen =true ;
  string defaultpassword="Default@strong";
  
  //private  memeber functhat is called whenevr balance changes  

  public:
  // member functions 

  // deposit amount inlinr mmeber func that will work when secyrevault will be open
  
    double depositamount(double amount ){  // func of SecureVault datatype 
       cout<<" Enter your current balance : ";
    cin>>balance ;
    // calling inline member functions 
    cout <<" Enter amount you want to deposit  :  ";
    cin >>amount ;
        double newbalance =balance+ amount;
        cout<<" New Balance  :  "<<newbalance<<endl;
    }
    

    //inlime member func :2
    string toggleVault(string userpassword ){
        
     // in it hardcoded string will eb written with which user's entered password will be chekced 
   
        
                 if(userpassword==defaultpassword){
        cout<<"Strong password ";
    }
        else{
       cout<<"Weak password "<<endl;
    }
    }

  int displayresult(){
  
   cout<<"Old Balance  :  "<<balance <<endl;;
   cout<<"Deposited amount  :  "<<amount<<endl;
   cout<<"User password  :  "<<userpassword<<endl;
  
}
};

int main() {
    int amount ;
    int balance ;
    bool isOpen =true;

    string userpassword;
    SecureVault vault; // object of class 
    
    //to know is vault open or closed 
    cout<<"Is vault open ?(yes =1 and NO =0 )  ";
    cin>>isOpen;

    // if vault will be open deposit fucn will run unless not 
    if(isOpen){

   
    vault.depositamount (amount); // calling depoistamount func
   
    }
    else{
        cout<<"vault is closed  "<<endl;
    }
    // inline member fucn 2: togglevault
    cout<<"User kindly enter your passwowrd   :  ";
    cin>>userpassword;
    vault.toggleVault(userpassword);

    // displaying result at the end ny func call 
   vault.displayresult();
    //cout<<" -------Displaying the Secure Vault data ------"<<endl;

    
    return 0;
}





