#include <iostream>
using namespace std;

int main() {
    char hehe= 'y';
    int changed = static_cast<int>(hehe);

    cout<<"hehe : "<<hehe<<endl;
    cout<<"Changed value of int : "<<changed<<endl;

    return 0;
}