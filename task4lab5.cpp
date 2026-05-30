#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class Student {
public: // means its members can be accsessed from outside also 
    string Name;
    int Physics_Marks;
    int Math_Marks;
    int OOP_Marks;
    // Default constructor
Student() {
    Name = "";
    Physics_Marks = 0;
    Math_Marks = 0;
    OOP_Marks = 0;
    }
    // Parameterized constructor 
Student(string Name, int Physics_Marks, int Math_Marks, int OOP_Marks) {
    this->Name = Name;
    this->Physics_Marks = Physics_Marks;
    this->Math_Marks = Math_Marks;
    this->OOP_Marks = OOP_Marks;
    }
void display() {
    cout << "Name: " << Name << endl;
    cout << "Physics Marks: " << Physics_Marks << endl;
    cout << "Math Marks: " << Math_Marks << endl;
    cout << "OOP Marks: " << OOP_Marks << endl;
    cout << "-----------------------" << endl;
    }
};

int main() {
Student student[3];
    // Taking input from the user 
for (int i = 0; i < 3; i++) {
    cout << "Enter details for Student " << i + 1 << endl;
    cout << "Name: ";
    cin >> student[i].Name;
    cout << "Physics Marks: ";
    cin >> student[i].Physics_Marks;
    cout << "Math Marks: ";
    cin >> student[i].Math_Marks;
    cout << "OOP Marks: ";
    cin >> student[i].OOP_Marks;
    cout << endl;
    }
int option;
    cout << "Select option:\n"
         << "0 = Terminate\n"
         << "1 = Display specific student\n"
         << "2 = Display all students\n";
    cin >> option;
if (option == 0) {
    exit(0); // means exit the whole program 
    }
else if (option == 1) {
    string searchName; // meber for searching of name
    cout << "Enter student name: ";
    cin >> searchName;
    bool found = false; // means intilizing it = false 
      for (int i = 0; i < 3; i++) { // as we have  3 students 
        if (student[i].Name == searchName) { // search for name among 3 students 
       student[i].display();
       found = true;
    break;
    }
    }
    if (!found) {
       cout << "Student not found.\n";
    }
    }
    else if (option == 2) {
        for (int i = 0; i < 3; i++) {
        student[i].display();
    }
    }
    return 0;
}
