#include <iostream>
using namespace std;

class Point{

    private :
      int x , y;
    public:
    // parameterized constructor 
      Point(int a , int b){
        x=a;
        y=b;
       cout<<"Value of x : "<<x <<endl; 
       cout<<"Value of y : "<< y<<endl;
      }  
     
     // copy constructor
     Point(const Point &obj){
        x = obj.x ;
        y = obj.y;
        cout<<"Copy constructor called \nValue of x is "<<x << "\n y : "<< y<<endl ;
     } 
};

int main() {
    // making objects 
    Point p1(10,15);
    // copy constructor called 
    Point p2(8,9);
    Point p3 =p1;




    return 0;
}