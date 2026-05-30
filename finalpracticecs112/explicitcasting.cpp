#include <iostream>
#include<string>
using namespace std;


int main() {

    cout<<"--------Normal casting -------"<<endl;
    double x=12.9866;
     int sum= (int ) x+1;
     cout<<"Sum "<<sum;

     cout<<"===== Static cast ===========\n";
     float fuel = 13.5443f;
     int result =static_cast<int>(fuel);
     cout<<"Static cast result : "<< result<<endl;

   return 0;
}