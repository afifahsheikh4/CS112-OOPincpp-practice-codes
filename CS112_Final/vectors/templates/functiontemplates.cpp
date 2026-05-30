#include <iostream>
#include<string>
//using namespace std;

template <typename T>
T max(T a, T b){
    return a>b ? a : b; // ternary operator
}

// we are using std here becoz max is a built in 
/*  function in templates thats why it gives error 



*/




int main() {
 std::cout<<"Int : "<<   max<int>(5,4)<< std::endl;
 std::cout<<"Double : "<< max<double>(5.55,5.545)<<std::endl;
 std::cout<<"Int : "<<   max<float>(5.76,486)<<std::endl;
 std::cout<<"Int : "<<   max<char>('a','z')  <<std:: endl; 
    

    return 0;
}