#include <iostream>
#include<string>
using namespace std;

template <typename T> // this is like a kind of template declaration syntax 
/*  This tells the compiler: 
"I’m about to define something that doesn't have
a fixed data type yet. I'm using T as a placeholder


*/



inline T const &Max(T const &a , T const &b){
//inline : tells the compiler whenever function call occurs replace that func call with func definition/body
// T  : T returns the same data type in which the function call occured 
// const& : means data was passed as reference 
// Max(parameters)


// ternary operator 
return  a < b ? b : a;

}


int main() {
    cout<<"----Template syntax function executing-----\n";
    int a =10;
    int b =35;

    cout<<"Int Max(int &a , int &b) : "<<Max(a , b)<<endl;

    float f1 = 4.555555;
    float f2 = 4.555556;

    cout<<"Int Max(int &a , int &b) : "<<Max(f1 , f2)<<endl;

    string s1 ="Hello Afifah";
    string s2="Parh lo plz finals hn";

    cout<<"Int Max(int &a , int &b) : "<<Max(s1 , s2)<<endl;

    
    
    return 0;
}