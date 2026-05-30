#include<iostream>
using namespace std;

#define DEBUG
int main(){
#ifdef DEBUG   
    cout<<" Debugging is ON."<<endl;
#else  
	cout<<" Debugging is OFF."<<endl;
#endif

	return 0;
}
