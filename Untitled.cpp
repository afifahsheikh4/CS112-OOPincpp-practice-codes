#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct Classroom{
	string classname;
	int marks[5];
    int totalstudents =5 ;
}c;
void inputClassData(Classroom *c){
    
cout<<" Enter the name of class : ";
cin>> c->classname;
for(int i=0 ; i< c->totalstudents ; i++){ // for inputting marks of students
cout<<" Enter the marks of student "<<i+1<< "  ";
cin>> c->marks[i];
}
}
float calculateAverage(Classroom c){
int sum=0;
for(int i=0 ; i <c.totalstudents ; i++){
sum+=c.marks[i];
}

return (float)sum / c.totalstudents;

}
   
float displayClassInfo(Classroom c){
cout<<" Name of class is : " <<c.classname;
for(int i=0 ; i<c.totalstudents ; i++){ // for inputting marks of students
cout<<" Enter the marks of student"<<i+1<<"  : "<< c.marks[i]<<endl;
}
cout<<"Calculated Average is : "<<calculateAverage(c);

}
int main() {
   //int Classroom c;
   inputClassData(&c);
   displayClassInfo(c);

    return 0;
}
	
	
