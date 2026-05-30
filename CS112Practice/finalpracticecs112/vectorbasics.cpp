#include <iostream>
#include<vector>
using namespace std;


int main() {
    // declare a vector 
    vector<int> v1 ; // empyt vector 

    //vector with given size 

//    vector<int> v2(size, value): they ar elike constructors
// paranthesis 
      vector <int> v2(2,5);

    //prinitng values of v2

    //------ RANGE BASED FOR LOOP-------
    for(int x : v2){
        cout<<"Range based for loop : "<<endl;
        cout<< x << " "<<endl;
    }
   
    // to print exact data u want
    vector<double > v3{2.0, 2.1 , 2.2};

    for (double i : v3){
        cout<<"Prinitng exact member from range-based"
            <<"for loop";
        cout<< i <<" "<<endl;
        }

    return 0;
}