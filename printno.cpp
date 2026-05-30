#include<iostream>
using namespace std;

void printnumber(int n){
	// base case 
	if(n==0){
		return;
	}
	

	cout<<" Number is : " <<endl;
		printnumber(n -1 );
}
int main(){
	
printnumber(5);
	
}
