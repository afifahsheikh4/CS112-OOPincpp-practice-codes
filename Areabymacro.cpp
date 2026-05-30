#include<iostream>
using namespace std;

//using macos
#define PI 3.14
#define Area(radius) (PI* (radius) * (radius))

int main(){

float radius =5.0;
float myArea =Area(radius);
cout<<"Area with radius 5 is : "<<myArea;
return 0;
}
