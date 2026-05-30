#include <iostream>

using namespace std;

int main() {
    int *array = new int [5]{1,2,34};
    for(int i =0 ; i<5 ; i++){
        cout<<"Value of array["<< i<<"] is : "<<array[i]<<endl;
    }




    return 0;
}

