#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> v1 ={1,2,3,4,5};

    cout<<"---Prinitng using range based for loop---\n";
    for (const int i : v1 ){
        cout<< i <<endl;
    }

    cout<<"---Prinitng using .at()---\n";
    cout<<"Element at index 0 : "<<v1.at(0)<<endl;
    cout<<"Element at index 1 : "<<v1.at(1)<<endl;
    cout<<"Element at index 2 : "<<v1.at(2)<<endl;
    cout<<"Element at index 3 : "<<v1.at(3)<<endl;
    cout<<"Element at index 4 : "<<v1.at(4)<<endl;

    // of in .at we try to get the value at index that does not exist 
    // it returns an exception
    cout<<"Invalid index : "<<v1.at(5)<<endl;
    cout<<"----this line will not be executed heehehehe ----\nit will throw exception of out of range "<<endl;

    return 0;
}