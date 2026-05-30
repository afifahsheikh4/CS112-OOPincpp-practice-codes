#include <iostream>
using namespace std;
    // how t find binary form ofnumber without bitwise operators
    int bitsform(int n, int divisor=2){
	// by recursion
	int divident;
	// base case
	while(divident<divisor){
		break;
	}
    cout<< n <<" / "<<divisor<<" = "<<(n/2)<<endl;
    int remainder;
    cout<<"Remainder : "<<(n%2)<<endl;
    bitsform(n);
	return remainder;	
}
int main(){
	int n;
	int divident, divisor;
	cout<<" Enter any integer :  ";
	cin>>n;
	
	bitsform(n);
}





















////program to use butwise AND 
////void BitwiseAnd(int a , int b){
////	//converting nu,bers to binary 
////	
////}
//int main() {
//    int a=5; // 5=0101
//    int b=3; // 3=0011
//    cout<< "The numbers before operation are :  "<< a <<"and "<< b <<endl;
//    cout<<" The numbers after AND operation are  :    "<<(a&b) <<endl; //AND
//    cout<<" The numbers after OR operation are  :    "<<(a|b) <<endl; //OR
//    cout<<" The numbers after XOR operation are  :    "<<(a^b) <<endl; //XOR
//    cout<<" The numbers after NOT Of a operation are  :    "<<(~a)<<endl ; //NOT OF a
//    cout<<" The numbers after NOT of b operation are  :    "<<(~b) <<endl; //not of b
//    
//    return 0;
//}
