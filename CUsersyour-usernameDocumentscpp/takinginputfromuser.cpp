#include <iostream>
using namespace std;
struct A{
  int x;
  float y;
};
struct B{
  A  v2;
};
struct Student{
  int age;
  int rollno;
  int marks[3]; // array as member
};
int main() {
Student S[3]={1,2,3,4,5,6,7,8,9,10,11};
for(int i=0 ; i<3 ;i++){
cout<<S[i].age<<endl;
cout<<S[i].rollno<<endl;
cout<<S[i].marks[0]<< S[i].marks[1]<<S[i].marks[2]<<endl;
cout<<" -------------------------" <<endl;
  }
    
    return 0;
}








// #include <iostream>
// using namespace std;

// struct Car{
//   int model ;
//   string name;
//   float price;
// } ;
// int main() {
// Car C1;
// cout<<"Enter the value of model "<<endl;
// cin>>C1.model;
// cout<<"Enter the name of car  "<<endl;
// cin>>C1.name;
// cout<<"Enter the price of car "<<endl;
// cin>>C1.price;

//  //   C1={.model=2020 , .name="Corolla" , .price=2000000};

  
//  return 0;
// }
