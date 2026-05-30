#include <iostream>
#include<string>

using namespace std;
//enum to display all the tyoes of vehicles present 
enum VehicleType{ CAR , TRUCK , MOTORCYCLE}v; // v is the variable of enum

//using structures to store characteristics of vehicles
struct CarDetails{
int numDoors;
bool Airconditioningsystem;
};

struct TruckDetails{
long int loadCapacity;
int numAxles;
};

struct MotorcycleDetails{
long int enginecc;
bool hassidecar;
};

// union to select vehicle
union VehicleInfo{
CarDetails car;
TruckDetails truck;
MotorcycleDetails motorcycle;
};

// struct to about vehicles information variables
struct Vehicle{
string Model;
float Price;
int year;
VehicleType type;
VehicleInfo info;
};

// function to input selected vehicle and its characteristics 
void InputVehicle(Vehicle &v){
int choice;
cout<<"Enter the type of vehicle (Car =0 , Truck =1 , Motorcycle=2) : ";
cin>>choice;
if (choice >=0 && choice <=2){
v.type=(VehicleType)choice;	
 }
   else{
cout<<"Invalid case . Defaulting it to Car \n";
v.type = CAR;	}

cout<<"Enter the model of vehicle  :  ";
cin>>v.Model;
cout<<"Enter the price of vehicle  : ";
cin>>v.Price;
cout<<"Enter the year of vehicle    :";
cin>>v.year;

// Inputs based on vehicles type
if(v.type ==CAR){

cout<<"Enter number of doors : ";
cin>>v.info.car.numDoors;
cout<<"Is air conditioning system working (Yes =1 and NO =0): ";
cin>>v.info.car.Airconditioningsystem;    
}

if(v.type ==TRUCK){
cout<<"Enter load Capacity of truck : " ;
cin>>v.info.truck.loadCapacity;
cout<<"Enter no of truck Axles : ";
cin>>v.info.truck.numAxles;    
}

if(v.type == MOTORCYCLE){
cout<<"Enter engineCC of motorcycle : " ;
cin>>v.info.motorcycle.enginecc;
cout<<"Does motorcycle has a side car : ";
cin>> v.info.motorcycle.hassidecar;    
}
}

// funct to display selected vehicles charcteristics 
void displayVehicle(Vehicle &v){
cout<<"\n ------VEHICLE DETIALS ------"<<endl;	
cout << "Model: " << v.Model << " | Year: " << v.year << " | Price: " << v.Price << endl;
switch (v.type)
{
case CAR:
cout<<"Doors : " <<v.info.car.numDoors <<" AC : " <<v.info.car.Airconditioningsystem<<endl;
break;

case TRUCK:
cout <<"Load: " << v.info.truck.loadCapacity << "  Axles: " << v.info.truck.numAxles << endl;    
break;

case MOTORCYCLE:
cout <<"Engine: " << v.info.motorcycle.enginecc << "cc | Sidecar: " << (v.info.motorcycle.hassidecar ? "Yes" : "No") << endl;
break;    
}
}

// function to calculate tax on vehicles
float calculateTax(Vehicle &v){
float totalTax=0;

if (v.type == CAR) {
totalTax = v.Price * 0.02; 
if (!v.info.car.Airconditioningsystem) 
totalTax += (v.Price * 0.08);
} 
else if (v.type == TRUCK) {
totalTax = v.Price * 0.012;

if (v.info.truck.numAxles > 2) 
totalTax += 500; // Adding flat fee for extra axles
} 
else if (v.type == MOTORCYCLE) {
totalTax = v.Price * 0.05;
if (v.info.motorcycle.enginecc > 1000) totalTax += 200;
    }
    return totalTax;
}	
// function to display expensive vehicle	
void CompareVehicles(Vehicle v1 , Vehicle v2 ){
if(v1.Price > v2.Price){
cout<<"Vehicle 1("<< v1.Model<< ") is more expensive "<<endl;}
else {
cout<<"Vehicle 2("<< v2.Model<< ") is more expensive "<<endl;		
} 	
}

int main(){
 
Vehicle v_list[2]; // arrays of struct 
for (int i=0 ; i<2 ; i++ ){
cout <<" \n Input for vehicle "<<i+1 <<"  :  "<<endl;
InputVehicle(v_list[i]);
}

for (int i=0 ; i<2 ; i++ ){
displayVehicle(v_list[i]); 	
cout <<" \n Calculated Tax :  "<<calculateTax(v_list[i]) <<endl;

CompareVehicles(v_list[0] , v_list[1]);
return 0;
}}
