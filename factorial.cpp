//#include <iostream>
//using namespace std;
//
//int fact(int n){
//if (n==0 || n==1 ){  // base case 
//return 1 ;    
//}
//
//return n*fact(n-1);
//}
//int main() {
//int n , result ;
//cout <<" Enter any number : ";
//cin>>n;
//  
//result=fact(n);
//cout <<" Factorial of "<<n <<" is "<< result;
//    return 0;
////}
// #include<iostream>
// using namespace std;
// 
//int sumRange(int n){
// 	if(n<=0){        // base case 
//    return 0;
// }
// int result , sum=0;
//
// return n+ sumRange(n-1) ; 
// 
//}
// 
// int main(){
// 	int n, result ;
// 	cout<<" Enter n : ";
// 	cin>> n;
// 	result = sumRange(n);
// 	// func call
// 	cout <<" Sum from "<< n <<" to 1 is : "<< result  ;
// }
// 
 
#include<iostream>
using namespace std;

int fib(int n){
	if (n==0 || n==1){
	return n;	
	}
	return fib(n-1) + fib(n-2);
}

int main(){
	int n ;
	
	cout<<" Enter n :";
	cin>> n; 
	for(int i=0 ; i<n ; i++){
		cout <<fib(i) <<" ";
	} 
}


 
 
 
 
 
 
 
 
 
 
 
 
