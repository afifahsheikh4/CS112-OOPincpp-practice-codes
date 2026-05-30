#include<iostream>
#include<string>
using namespace std;
int main(){
	int j;
	// reversal of charcter strings 
	string str ={'a' ,'b','c','d','e'};
	for(int i=0; i<=str.length() ; i++){ // check characters from start
		for( j=str.length()-1 ; j>=0; j-- ){ // checks characters from end
			cout<<str[i];
		}
		cout<<str[j];
		
	}
	cout<<str<<endl;
	
}






//#include <iostream>
//using namespace std;
//
//int main() {
//// inputting string 
//char str[10];
//cout << "Enter a string: ";
//cin.getline(str , 10);
//
//for(int i=0 ; i<=10;i++){
//	cout <<str[i]<<" ";
//	cout<<endl;
//}
//
//  
//    return 0;
//}
//
//
//
//
//
//
////#include<iostream>
////#include<string>
////using namespace std ;
////int main(){
////
////    // character string 
////    char str1[] ={'a','b','c'};
////    char arr[]={1,2,3};
////    cout<<str1<<endl;
////    cout<<arr <<endl;
////    char str2[]={'a','b','c','\0'};
////    cout<<str2;
////
////}
