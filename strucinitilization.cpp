#include <iostream>
using namespace std;

struct Car{
  int model ;
  string name;
  float price;
} ;
int main() {
Car C1[30];	
for(int i =0 ; i<30; i++){

cout<<"Enter the model of car"<<i+1<<endl;
cin>>C1[i].model;
cout<<"Enter the name of car  "<<i+1<<endl;
cin>>C1[i].name;
cout<<"Enter the price of car "<<i+1<<endl;
cin>>C1[i].price;
}
cout<<" The list of cars above 5000000 is " <<endl;
for(int i=0 ; i<30 ; i++){
	if(C1[i].price> 5000000){
		cout<<" The model of car is "<<C1[i].model<<endl;
		cout<<" The name of car is "<<C1[i].name<<endl;
		cout<<" The price of car is "<<C1[i].price<<endl;
	}
	}
 
  
 return 0;
}










//#include <iostream>
//using namespace std;
//struct BOOK{
//    int prize;
//};
//struct Car{
//  int model ;
//  string name;
//  float price;
//} 
//C1;
//int main() {
//  BOOK p; // declaration of a variable
//  p.prize=500;
//  C1={.model=2020 , .name="Corolla" , .price=2000000};
//  cout<<p.prize<<endl;
//  cout << C1.model<<endl;
//  cout<<C1.name<<endl;
//  cout<<C1.prize<<endl;
// return 0;
//}
