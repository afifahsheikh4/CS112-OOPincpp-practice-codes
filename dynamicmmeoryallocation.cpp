////// 
////#include <iostream>
////using namespace std;
////
////int main() {
////
////    // int *ptr= new int(10);
////
////    // delete ptr;
////
////    // cout<<*ptr<<endl;
////
////    int *ptr= new int[100000000];
////
////    ptr[5000000]=100;
////
////    cout<<ptr[5000000]<<endl;
////cout<<ptr<<endl;
////    delete ptr;
//// cout<<*ptr<<endl;;
//// cout<<ptr<<endl;
//// int *r=new int(10);
////  *r=10;
////  cout<<r<<endl;
////  cout<<*r<<endl;
////    // cout<<sizeof(ptr)<<endl;
////    return 0;
////}
//
//
//// 
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // int *ptr= new int(10);
//
//    // delete ptr;
//
//    // cout<<*ptr<<endl;
//
//    int *ptr= new int[1000];
//
//    ptr[5000]=100;
//
//    cout<<ptr[5000]<<endl;
//cout<<ptr<<endl;
//
// int *p=new int(1000);
//  *p=10;
//  cout<<p<<endl;
//  cout<<*p<<endl;
//    // cout<<sizeof(ptr)<<endl;
//    return 0;
//}


// 
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // int *ptr= new int(10);
//
//    // delete ptr;
//
//    // cout<<*ptr<<endl;
//
//    int *ptr= new int[1000];
//
//    ptr[5000]=100;
//
//cout<<ptr[5000]<<endl;
//cout<<ptr<<endl;
//cout<<" if(ptr )"<<(ptr != NULL)<<endl;
//
//
// int *p=new int(1000);
//  *p=10;
//  cout<<p<<endl;
//  cout<<*p<<endl;
//    // cout<<sizeof(ptr)<<endl;
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
	
	   int *ptr = new int(10);
	   *ptr=5;
delete ptr;

// If we do something else, the OS might overwrite the "Available" room
int *temp = new int(999); 

cout << *ptr << endl; // Now this might print 999 or a random huge number!



     int *ptr= new int(10);

     delete ptr;
     cout<<ptr<<endl;
     cout<<*ptr<<endl;
}
