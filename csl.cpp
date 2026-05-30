#include<iostream>
#include<string>
using namespace std;

struct Student{
   string fieldsname;
   int rollNumber;
   float marks;
}S;

void inputStudent(string fieldname , int rollNUMBER , float marks){
  }


void displayStudent(Student S){
    cout<<" Fieldname of student is "<<S.fieldsname <<endl;
    cout<<" Rollnumber of student is "<<S.rollNumber <<endl;
    cout<<" Marks of student is "<<S.marks <<endl;

}
int main(){

Student S;
    cout<<"Enter student fieldname  :" <<endl;
    cin>>S.fieldsname;
    cout<<"Enter student rollNumber :"<< endl;
    cin>>S.rollNumber;
    cout<<"Enter student marks :"<<endl;
    cin>>S.marks;

displayStudent(S);
    
}
