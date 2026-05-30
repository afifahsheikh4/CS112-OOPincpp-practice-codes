#include<iostream>
using namespace std;

 int sum=0;
 int i=1;
bool isperfectnumber(int n){
// base case 
if (n==1){
    return 1;
}
// recursive case
for ( i=1 ; i<n ; i++){
   if (n % i ==0){
   
    sum+=i;
    cout<<i;
   }}
   if(sum==n){
    cout<<" Perfect no ";
   }
   

}





int main(){
int n;
cout<<" Enter any number : ";
cin>>n;


// calling func
isperfectnumber(n);

    
}