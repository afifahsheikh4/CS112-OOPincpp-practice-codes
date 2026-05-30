#include<iostream>
#include<string>
#include<cstring>
using namespace std;

    
bool findsubstring(char *str , char*substring , int &start ,int &end){
    int n=strlen(str);
    int m=strlen(substring);
    
    start =-1;
    end=-1;
  
    // to check ifsubsring matches string 
   for(int i=0 ; i< n ; i++){ // to check if at any index of string stating ndex / matching first value of substring is present  
     bool match =true ;
	for (int j=0 ; j<m ; j++){ // for substring 
        if(str[(i+j)% n] != substring[j]){ // if value ofstr index is !=value of substring index
            // if matching value doesnot exist 
        match =false ;
           break;
        }}
      // if matching value exists means bool=true
    if(match){
        start=i;
        end=(i+m -1)%n  ;
     
      return true;
    }
   
    }
    return false;
   }
int main(){
	
    int start,end;
    char str[]="abcdab";
    char substring[100];
    
    cout<<"String : "<< str<<endl;
    cout<<"Enter substring : ";
    cin.getline(substring,100);

    // calling func to see if substring is found or not 
   bool found= findsubstring(str , substring, start , end );
    if (found ){
    	cout<< "Start : "<<start <<",  End : "<<end<<endl; 
	}
	else  {
		cout<<"Start : "<<start <<" ,  End :  "<<endl;
	}

  
   
}
