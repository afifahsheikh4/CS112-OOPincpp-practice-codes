#include <iostream>
#include<string>
#include<stdexcept>

using namespace std;

void processstudents(string name , int marks , bool serverup){
cout<<"Processing : "<<name <<endl;


  try {
    if(!serverup)
      throw runtime_error("Server is offline!");

    if (marks <0 || marks >100){
        throw out_of_range("Marks must be btw 0-100");
    }  
    if(name.empty()){
        throw invalid_argument("Name is empty");

    }

//Think of the symbol ? as asking "Is this true?" and
// the : as saying "Otherwise..."

    string grade = marks>=90?"A+" : marks>=80?"A" : marks>=70?"B" : marks>=60?"C" : "F";
    
    cout<<"Marks : "<<marks <<" | Grade : "<<grade <<endl;


  }
  catch(runtime_error &e){
    cout<<"Server : "<<e.what() <<endl;}

    catch(out_of_range &e){
        cout<<"Range : "<<e.what()<<endl;
    }

    catch(invalid_argument &e){
        cout<<"Input : "<<e.what()<<endl;
    }
    catch(...){  // catch_all
        cout<<"Unknwon :Contact admin !"<<endl;
    }
  }


int main() {

    processstudents("Afifah" , 72, false);
    processstudents("Ali",   85,  true);
    processstudents("Sara",  150, true);

    return 0;
}