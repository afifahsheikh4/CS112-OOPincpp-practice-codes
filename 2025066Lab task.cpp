#include <iostream>
#include<cmath>
#include<string>

using namespace std;

enum VehicleType{ CAR , TRUCK , MOTORCYCLE};
struct CarDetails{
int numDoors;
bool Airconditioningsystem;
}car;

struct TruckDetails{
long int loadCapacity;
int numAxles;
}truck;

struct MotorcycleDetails{
long int enginecc;
bool hassidecar;
}motorcycle;

VehicleType type;
union VehicleInfo{
CarDetails car;
TruckDetails truck;
MotorcycleDetails motorcycle;
}info;
struct Vehicle{
string Model;
float Price;
int year;
VehicleType type;
VehicleInfo info;
}vehicle;

void InputVehicle(Vehicle &v){
cout<<"Enter the model of vehicle " << endl;
cin>>v.Model;
cout<<"Enter the price of vehicle " << endl;
cin>>v.Price;
cout<<"Enter the year of vehicle " << endl;
cin>>v.year;
cout<<"Enter the type of vehicle (Car =0 , Truck =1 , Motorcycle=2)"<< endl;
cin>>v.type;

int displayVehicle(Vehicle ){
switch (v.type);
{
case CAR:
cout<<" Enter number of doors : " <<car.numDoors;
cin>>car.numDoors;
cout<<" Is air conditioning system working : " <<endl;
cin>> car.Airconditioningsystem;    
break;

case TRUCK:
cout<<" Enter load Capacity of truck : " <<truck.loadCapacity;
cin>>truck.loadCapacity;
cout<<" Enter no of truck Axles : " <<endl;
cin>> truck.numAxles;    
break;

case MOTORCYCLE:
cout<<" Enter engineCC of motorcycle : " <<motorcycle.engineCC;
cin>>motorcycle.enginecc;
cout<<" Does motorcycle has a side car : " <<endl;
cin>> motorcycle.hassidecar;    

}
}
}
int calculateTax(int Car , int Truck , int Motorcycle){
	int totalcar=2% ,taxoncar = 8%;
	if(Airconditioningsystem == 'False'){
	total +=taxoncar; 	
	}
    int taxontruck=12%   , totaltruck= 0;
    if(numAxles > 2){
    totaltruck++;
	}
	totaltruck +=taxontruck;
	
    int taxonmotorcycle=5%   , totalmotorcycle= 0;
    if(enginecc > 1000){
    totaltruck+=3;
	}
	totaltruck +=taxontruck;
	}
void compareVehicle(calculateTax){
cout<<"Comparing 2 vehicles on the basis of their price including tax : "

}


int main() {
 
InputVehicle(Vehicle &v);    
displayVehicle(Vehicle );
calculateTax(Vehicle);



return 0;
}