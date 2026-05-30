#include <iostream>
using namespace std;

// Macro definition for square; evaluates ((x)*(x))
#ifndef SQAURE
#define SQAURE(x) ((x)*(x))
#endif

int main() {
    int a = 5, b = 6;

    cout << "The square of (a+b) : " << SQAURE(a + b) << endl
         // Predefined macro showing current line number
         << "This is line number : " << __LINE__ << endl
         // Predefined macro showing compilation time
         << "This is compilation time : " << __TIME__ << endl
         // Predefined macro showing current file name
         << "This is file name : " << __FILE__ << endl;

    return 0;
}





//#include <iostream>
//using namespace std;
//
//// Macro defining a string literal
//#define Macro1 "This is string"
//
//int main() {
//    int radius = 5;
//
//    // Example of using the macro
//    cout << Macro1 << endl;
//
//    return 0;
//}
//










//#include <iostream>
//#include"heroh.cpp"
//using namespace std;
//
//int main() {
//    
//hero* playerptr =NULL ;  // pointer to hero 
//hero myhero;            // object of hero     
//playerptr = &myhero ; 
//playerptr->name;
//playerptr->health;
//playerptr->CheckStatus();
//
//return 0;
//}
