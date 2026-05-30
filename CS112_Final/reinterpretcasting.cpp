#include <iostream>
using namespace std;

int main() {
    int x=65;
    char* ch = reinterpret_cast<char*>(&x);
    cout<<"Integer value : "<<x<<endl;
    cout<<"Character value : "<<*ch<<endl;
    
    return 0;
}