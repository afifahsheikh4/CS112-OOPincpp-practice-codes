#include<iostream>
//#include<string>
using namespace std;

//-----FUNCTIONLIKE MACROS-----
//#define number(n)  cout << "The numbers less than  5 are : "<< Printnumber(n-1);
void Printnumber(int n){
	//recursion 
	// base case #
if(n==0){
		return ;		
}
	//recursive case
	//cout <<Printnumber(n-1);
	
    Printnumber(n-1);
    cout<<n<< " ";
}

int main(){
int n=5;
	
	cout<<" Numbers less than " << n <<" are : "<<endl;
	Printnumber(n-1);
//	cout<<result;
}

//#define SQUARE(i) ((++i) *(i++))
//
//int main(){
//	int i=3;
//
//
//cout<<SQUARE(i);
//	
//}

//#define ADD(x,y) (x+y)
//int main(){
//
//    cout<< ADD(2,3)*4;
//
//} 
