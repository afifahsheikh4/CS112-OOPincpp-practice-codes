#include <iostream>
#include<cstring>
using namespace std;


 class Asset{
    private :
     string secretcode;
        int assetId;
        char *name ;
        static int totalAsset;
        
    public:    
        
        // default constructor
        Asset (){}

        // constructors 
        Asset(char *n , int assetId){
            // initialzing 
            this->name=name ;
            this->assetId = assetId;



            // error handling 
            if(assetId <0){
                throw "NegativeID";
            }

            // dynamic memory allocarion
            name = new char[strlen(n)+1];

            // whenevr new obj is created means new asset is included 
            // so here we do increment forstatic data member
            totalAsset++;
            cout<<"Total Assets : "<<totalAsset<<endl;
            
            // copy string into dynamic memory 
           // strcpy(name , n);
        }
        // copy assigmnet operator 
        Asset &operator = (const Asset &obj){
            cout<<"Copy assigmnet operator called \n";
            return *this; 
            
        }

       
        // making asset an abstract class : pure virtual func
        virtual int get_maintenancecost() =0;


        // destrucotr to freee mmeory 
        virtual ~Asset(){}

         // friend function to verify authneticity 
        friend void printSecretcode(const Asset &obj);

        //operator overloading of strema exertion operator 
        friend ostream &operator <<(ostream &out , const Asset &a);

        //operator overloading pls operator 
        friend int operator+(Asset &a1 , Asset &a2){
            return a1.get_maintenancecost() + a2.get_maintenancecost();
        }
       

    };
   // initlizing static data member 
   int Asset::totalAsset = 0;

   // function definition of friend func to acess private data meber
   void printSecretcode(const Asset& obj){
    cout <<"Secret code : "<<obj.secretcode<<endl;
   }

   // function definiton of overloading function 
   ostream& operator<< (ostream& out , const Asset& a){
    // to display all the info 
      out<<"Name : "<<a.name<<endl;
      out<<"Asset ID : "<<a.assetId <<endl; 
      out<<"Secret code : "<<a.secretcode <<endl; 
      out<<"Total Asset count "<<a.totalAsset <<endl; 
      return out;

   } 


// derived class 
class Electronics: public Asset {
    public:
    int get_maintenancecost() override {  // overriden func 
        cout<<"Performing software updates and hardware diagnostic\n";
        return 500;
    }
};    

// derived class 2
class Furniture :public Asset{
public:
    int get_maintenancecost(){
        cout<<"Checking for structural integrity and polishing \n";
        return 1000;
    }
};
int main() {

    // creating object of Asset class 
  //  Asset a1("Afifah" , 66);
   // Asset a2(a1); // creating other obj usinf first obj is called copy constructor 
   Furniture f1;
   f1.get_maintenancecost();
   Electronics e1;
   e1.get_maintenancecost();
   
   // using try and catch method 
   try{
    throw "NegativeID";
   }
   catch (string *e){
    cout<<"Error : Invalid Asset ID detected \n"<<e<<endl;
   }
    return 0;
}