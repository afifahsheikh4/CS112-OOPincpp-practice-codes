#include <iostream>
using namespace std;

class safearray{

    public:

   static const int Size =10;
    int array[Size];


    safearray(){
        // here we are just setting the inital condition 
        int i;
        for(int i=0 ; i<Size ; i++){
            array[i] =i;
        }
    }

    int &operator[](int i){
        if (Size> 10){
            cout<<"Index out of bound \n";
            return array[0];
        }
        return array[i];
    }
};

int main() {
    safearray A;
    cout<<"A[1] : "<< A[1]<<endl;
    cout<<"A[7] : "<< A[7]<<endl;
    cout<<"A[12] : "<< A[12]<<endl;
    
    return 0;
}