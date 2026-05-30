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
            
            // error handling 
            if(assetId <0){
                throw "NegativeID";
            }

            // dynamic memory allocarion
            name = new char[strlen(n)+1];
            strcpy(name , n);

            this->assetId=assetId;
            // whenevr new obj is created means new asset is included 
            // so here we do increment forstatic data member
            totalAsset++;
            cout<<"\nTotal Assets : "<<totalAsset<<endl;
            
            // copy string into dynamic memory 
           // strcpy(name , n);
        }
        // copy assigmnet operator 
        Asset &operator = (const Asset &obj){
           if(this != &obj){
            assetId = obj.assetId;
            secretcode = obj.secretcode;

            delete [] name ;
            name = new char [strlen(obj.name) + 1];
            strcpy(name , obj.name);
           }





            cout<<"Copy assigmnet operator called \n";
           
            
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
    cout <<"\nSecret code : "<<obj.secretcode<<endl;
   }

   // function definiton of overloading function 
   ostream& operator<< (ostream& out , const Asset& a){
    // to display all the info 
      out<<"\nName : "<<a.name;
      out<<"\nAsset ID : "<<a.assetId ; 
      out<<"\nSecret code : "<<a.secretcode; 
      out<<"Total Asset count "<<a.totalAsset ; 
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
    

   
   // using try and catch method 
   try{
     Electronics e1;
        Furniture f1;

        cout << e1;
        cout << f1;
        
   f1.get_maintenancecost();
e1.get_maintenancecost();
   
   }
   catch (const char *e){
    cout<<"Error : Invalid Asset ID detected \n"<<e<<endl;
   }

    return 0;
}