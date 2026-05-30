	#include <iostream>
using namespace std;
void ptr_func(int *num);
void dangling_ptr();
int* func();

	
	int main(){
	
	int y = 7;
	
	cout<<"The value of y is "<<y<<endl;
	
	int* yptr;
	//int *yptr;
	yptr = &y;
	cout<<"The value of yptr is "<<yptr<<endl;

	cout<<"The address of y (using reference operator) is "<<&y<<endl;
	cout<<"The address of y (using pointer) is "<<yptr<<endl;
	cout<<"The value of y is "<<*yptr<<endl;

	
	int number = 15;
	cout<<"Memory address of num is "<<&number<<endl;
	ptr_func(&number);
	cout<<"The value of number after execution is "<<number<<endl;
}
