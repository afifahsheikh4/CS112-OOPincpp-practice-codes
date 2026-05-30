#include <iostream>
#include<cctype>
using namespace std;

int main() {
    string password;
    cout<<"Enter password  : "<<endl;
    cin>> password;
    
    bool hasDigit ;  // varaiable to store whether enetered char is digit or not 
    bool hasUpper;
    // count length 
    if (password.length() >=8){
        // loop to go through characters
    for(int i =0; i<=password.length(); i++){
    char character= password[i];
    

    // is character a digit 
    if(isdigit(character)){
    hasDigit = true;
    }
    // to see uper case letters 
    if(isupper(character) ){
    hasUpper=true;

    }
}
   if(hasDigit && hasUpper){
    cout<<"Strong password "<<endl;
    }

} 
    else{
        cout<<" Weak password "<<endl;
    }
}
