#include<iostream>
#include<string>
using namespace std;

class Student{
public:  // means they can be aceesed from outside of the class also 
    string name;
    int roll_no;
    // constructor 
   Student(string p_name , int p_roll_no){
   	this-> name = p_name ;
   	this->roll_no=p_roll_no;
   }
};
// Rectangle class by encapsulation
class Rectangle{
private:  // means they cannot be accessed from inside the class 
    double length;
    double width;
    
public:
    Rectangle(double len, double w) : length(len), width(w) {}
 // to find perimeter : sum of all sides 
    double getPerimeter(){ 
        cout << "Perimeter: ";
        return 2 * length + 2 * width; // e.g l=3,w=6 so perimeter = 2*3 + 2*6 =18
    }
    // func to find area 
    double getArea(){ 
        cout << "Area: ";
        return length * width; // will *both e.g l=2,w=2 area =4
    }
};

int main(){
    Student s("Ali", 2); // storing values or passing arguments inisde constructor 
    
    // calling with object and then dot oerator and object name 
    cout << s.name << endl;
    cout << s.roll_no << endl; 
    Rectangle r(3, 6); 
    
    // calling functions  that are created inside encapsulation 
    cout << r.getPerimeter() << endl; 
    cout << r.getArea() << endl;

    return 0;
}

//Student(string n, int r) : name(n), roll_no(r) {}
