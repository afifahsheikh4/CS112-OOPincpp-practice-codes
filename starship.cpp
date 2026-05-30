#include <iostream>
#include<string>
using namespace std;

// enum to define categories of spaceship
enum StarshipType{Explorer , Cargo ,Battleship};

// struct of Sub System
struct EngineSpecs{

int warplevel;
float energyoutput;
};

//union to store special equipments 
union SpecialEquipment{  
bool laboratory;      //   if it is explorer   
float cargocapacity;   //  if it is cargo ship
int lasercannos;        // if it is battlefield
};

//strcut for registry
struct Starship{

string shipname ;
StarshipType type;
EngineSpecs engine;
SpecialEquipment payload;

void calculatestatus(){
// choice of ship
int choice;
cout<<"Enter Ship type : ( Battleship =0 ;Cargo =1 ; Explorer =2 )    :     " ;
cin>>choice;
type=(StarshipType)choice;	
 
cout<<"Enter Shipname  :   ";
cin>>shipname;
cout<<"Enter WarpLevel :   ";
cin>>engine.warplevel; 
cout<<"Enter energy output  :   ";
cin>>engine.energyoutput;

switch(type){
    case Explorer:
    cout <<" Has laboratory (YES =1 , NO=0 )   :   ";
    cin>> payload.laboratory;
    break;
    case Cargo:
    cout<<" Enter Cargo capacity : ";
    cin>> payload.cargocapacity;
    break;
    case Battleship:
    cout<<" Enter laser cannons : ";
    cin>>payload.lasercannos;
}
}
void displayStatus(){
cout << "\nShip: " << shipname << " | Warp: " << engine.warplevel;
if (type == Explorer) cout << " | Lab: " << (payload.laboratory ? "Yes" : "No");
else if (type == Cargo) cout << " | Cargo: " << payload.cargocapacity;
else if (type == Battleship) cout << " | Lasers: " << payload.lasercannos;
cout << endl;
}
};
int main() {

Starship m_list[2];   // arary for struct

for(int i=0 ; i<2 ; i++){
cout<<"\n------INPUTS FOR SHIP  : "<< i+1 << "-----"<< endl;
m_list[i].calculatestatus();

cout << "\n--- FLEET REGISTRY ---";
for (int i = 0; i < 2; i++) {
m_list[i].displayStatus();
}
}
} 
