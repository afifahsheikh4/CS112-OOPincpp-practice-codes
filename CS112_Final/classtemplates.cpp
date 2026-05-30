#include <iostream>
using namespace std;

//template declararion
template <typename T>
// making class 

class checking {

    public:
    //data members
    int x ;
    int y;

    // constructors 
    checking(T v1 , T v2) : x(v1) , y(v2){
        cout<<"\n------Constructor executing ------\n";

    }
    void getvalues(){
        cout <<"x : "<<x <<" y : "<<y <<endl;
    }
};

int main() {
    checking <int> intchecking(10,23.4);
    checking <double> doublechecking(12, 22.33);

    // calling functions 
    intchecking.getvalues();
    cout<<endl;

    doublechecking.getvalues();
    






    return 0;
}