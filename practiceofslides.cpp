#include <iostream>
using namespace std;
struct Address{
    string city;
    string country;
};
struct contactinfo{
    string name;
    string phoneno;
    char ch;
    Address addr; // member and its obj 

};
int main(){
contactinfo contact[10];
    for(int i =0; i<10 ; i++){
cout<<" Enter the contact info of \n"<< i +1<<endl;

cout<<" Enter the city of "   << i+1 <<endl;
cin>>contact[i].addr.city;

cout<<" Enter the country of "<< i+1 <<endl;
cin>>contact[i].addr.country;

cout<<" Enter the name of "   << i+1 <<endl;
cin>>contact[i].name;

cout<<" Enter the  phone of " << i+1 <<endl;
cin>>contact[i].phoneno;
    }

}
