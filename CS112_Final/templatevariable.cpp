#include <iostream>
using namespace std;

template <typename T> constexpr T pi = T(3.14159);

int main() {
     cout<<"Pi as float : "<<pi<float> <<endl;
     cout<<"Pi as int : "<< pi<int> << endl;
     cout<<"Pi as double : "<< pi<double> <<endl;

    return 0;
}