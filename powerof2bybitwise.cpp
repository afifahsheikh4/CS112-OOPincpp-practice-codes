#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<" Enter any number : ";
	cin>>n;
	// to see if n is power of 2 by bitwise operators
	if(n>0 && n&(n-1)==0){
		cout<<" Power of 2 "<<endl;
	}
	else {
		
		cout<<" Not a power of 2";
	}
	
}


