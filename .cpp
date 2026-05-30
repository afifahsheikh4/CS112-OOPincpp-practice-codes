#include<iostream>
#include<string>
using namespace std;

class Student {
public : 
string  Name;
int  Physics_Marks;
int  Math_Marks;
int OOP_Marks;

// default constructor 
 Student() {
        Name = "";
        Physics_Marks = 0;
        Math_Marks = 0;
        OOP_Marks = 0;
    }
// paarmeterized constructor : 
 Student (string Name, int Physics_Marks, int Math_Marks, int OOP_Marks){
 	this->Name=Name;
 	this->Physics_Marks=Physics_Marks;
 	this->Math_Marks=Math_Marks;
 	this->OOP_Marks=OOP_Marks;
 }
 	
 };
 string displayoptions(string a,string b,string  c){
   if(option==0){ // terminate the application 
   exit(0) ; // exit(0) is used to terminate program 
   }
   else if (option ==1 ){ // will display data of specific student 
   // first we need to ask for which student user wants data 
 
   string student;
   cout<<" Which student's data you want to see  : ";
   cin>>student;
   
   if (student ==student1){
	getstudent[1].display();
   }
   else if (student==student2){
	getstudent[2].display();
   }
   else if (student==student3){
	getstudent[3].display();
   }
}
   else if (options ==2){
	// will dispaly data of all 3 students
	getstudent[1].display();
	getstudent[2].display();
	getstudent[3].display();
   }
   }
   
   void Student::display(){ // as this func is outside the class so we are using scope resolution operator to define it 
   	cout<<"Name : "<<Name<<endl;
   	cout<<"Physics Marks : "<<Physics_Marks<<endl;
   	cout<<"Math Marks : "<<Math_Marks<<endl;
   	cout<<"OOP Marks : "<<OOP_Marks<<endl;
   }
    

int main(){
 	
 	Student student[3] ;
  
     // entering details for all objects by using arrays 
 	for (int i=0; i<3 ;i++){
 		cout<< " Enter details for Student "<< i+1<< " : "<<endl;
 	student[i].display();
 	
	}
 	
 		// for allowing user to select from 3 options 
 		int option ;
 		 cout<<" Select any one option 0=terminate application , 1=display result for specific student 2 .display result for all students :   ";
 		cin>>option;
 		
	
 	
 	
	}
 	

 