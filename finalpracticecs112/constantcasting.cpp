#include <iostream>
#include<typeinfo>
using namespace std;


void print(char *str){
  cout<<"String is : "<<str<<endl;}   



;
int main() {
    const char* c="Sample data";
     print(const_cast<char *>(c));

     int i=10;
     float f =2.2;
     cout<<"== Type id ==\n";
     cout<<"Type of i : "<<typeid(i).name()<<endl;
      cout<<"Type of f : "<<typeid(f).name()<<endl;
    return 0;
}