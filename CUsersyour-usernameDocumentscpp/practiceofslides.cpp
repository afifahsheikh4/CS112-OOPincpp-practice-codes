#include <iostream>
using namespace std;
struct Address{
    string city;
    string country;
}A;
struct contactinfo{
    string name;
    string phoneno;
    char ch;
    Address v2;

}C;
int main(){

    for(int i =0; i<10 ; i++){
cout<<" Enter the contact info of "<< i <<endl;
cout<<" Enter the city of "   << i <<endl;
cin>>A.city[i];
cout<<" Enter the country of "<< i <<endl;
cin>>A.country[i];
cout<<" Enter the name of "   << i <<endl;
cin>>C.name[i];
cout<<" Enter the  phone of " << i <<endl;
cin>>C.phoneno[i];
    }

}