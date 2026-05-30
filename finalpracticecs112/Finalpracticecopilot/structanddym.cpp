#include <iostream>
#include<string>
using namespace std;

struct Book{
// in struct we only create varaibles 
string title ;
double price;

};

int main() {
    Book *b1 = new Book [2];
    
    for (int i=0 ; i<2 ; i++ ){
        cout<<"---Book 1"<<i<<" ---\n";
        cout<<" Title of book "<<i<<" is : ";
        cin>>b1[i].title;
        cout<<"\nPrice of book "<<i <<" is :";
        cin>>b1[i].price;
    }

    for(int i=0 ; i<2 ; i++){
        // displaying all thedata
        cout<<"Title of book 1 : "<<b1[i].title <<endl;
        cout<<"Price of book 1 : "<<b1[i].price <<endl;
       
    }

    // free the mmeory 
    delete []b1;
    b1=nullptr; 
    cout<<"Dangling pointer "<< b1;
    return 0;
}