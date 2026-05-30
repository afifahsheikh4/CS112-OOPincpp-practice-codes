#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;



void testoutofrange(){
  cout<<"----- OUT OF RANGE ------"<<endl;
 try{
   string s="GIKI";
   cout<<"s.at(0) : "<<s.at(0)<<endl;
   cout<<"s.at(99) : "<<s.at(99)<<endl;

 }
 catch(out_of_range &e){
    cout<<"Out of range --> "<<e.what()<<endl;
 }
}

void testlengtherror(){
 cout<<"\n----Length_error----\n";
 try{
    string s ="hello";
    cout<<"Max size : "<<s.max_size()<<endl;
  //  s.resize(s.max_size() + 1);
    cout<<"After resizing : ";s.resize(s.max_size() + 1); // here the error will occur as here we are trying to increase 
    // max limit of length by 1 which is an eception
 }

  catch(length_error& e){
    cout<<"Length_error --> "<<e.what()<<endl;
  }
}

void testbadalloc(){
    cout<<"\n----bad_alloc----"<<endl;
   
    try{
    int* arr = new int[100];
    cout<<"Small array allocated "<<endl;
    delete[] arr;
    
    int* big= new int [9999999999999999LL];
    cout<<"Big array allocated "<<endl;
    delete[] arr;  


    }
catch(bad_alloc& e){
    cout<<"bad_alloc --> "<<e.what()<<endl;
}

}

int main(){

  testoutofrange();
  testlengtherror();
  testbadalloc();



}

















