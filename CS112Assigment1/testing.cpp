#include <iostream>
using namespace std;

void printstars(int n,int startcol ,int endcol , int spaces){
 
 //base case 
 if(endcol> 2*n){
  cout<<endl;
 return ;
 }
 if((endcol<=2*n) ){
 cout<<"*";
 }
    printstars(n,startcol +1 ,endcol +1,spaces );
}
 void printpattern1(int n){
  int  startcol ;
  int spaces ;
  int endcol;
    printstars(n,startcol ,endcol,spaces );
   
 }
int main() {
    int n ; 
    cout<<" Enter no of rows :  ";
    cin>>n;
    printpattern1(n);
    return 0;
}