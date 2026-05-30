#include<iostream>
#include<string>
#include<cstring>
using namespace std;


char isvowel[] ="AEIOUaeiou";
int findvowels(char *str){
    int sum = 0;
    // converting character array into characters 
    for(int i=0 ; str[i] !='\0' ; ++i){
    //iterate before charcter becomes =to nullptr 
       if(strchr(isvowel, str[i])){
           sum+=1;
     }
      
    }
    return sum;
    }
 
int main(){

char str[100]; // character array 
cout<<"Enter string : ";
cin.getline(str , 100);

int result =findvowels(str);
cout<<"Sum "<<result<<endl;


}