#include <iostream>
#include<string>
#include<stdexcept>
using namespace std;

int main() 
    /*  after reading name of this file first come in mind
    is  syaung that it will include classes  but actually it 
    is just usinf headerfile: stdexcept to do 

    */

    /// variables for storing our text
    {
      string sentence ;
      string s1, s2,s3;

     try{
       // setup the initial details
       sentence = "-----Testing string exceptions!-----\n";
       cout<<"Sentence : "<<sentence<<endl;

       cout<<"Sentence.length : "<<static_cast<int>(sentence.length())<<endl;

       // to grab certaion portion of sentence 
       cout<<"Sentence.substr : "<<sentence.substr(8,20)<<endl;

       // -----the error statment the error will occur here 
       cout<<"Error will occur here : "<<sentence.substr(28,10)<<endl;

       s1 = "Exception handling" + sentence;
       cout<<"Sentnce.substr (error occured here)"<<s1<<endl;

     }
      // safety net for range error 
      catch(length_error le){
        cout<<"-----In the length_error----- \n"
            <<"catch block : "<<le.what()<<endl;
      }


    


    return 0;
    }