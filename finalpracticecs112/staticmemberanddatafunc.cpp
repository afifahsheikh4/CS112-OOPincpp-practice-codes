#include<iostream>
using namespace std ;

class Box{
	private :
		int length;
		int breadth;
		int height;
		static int objectcount;
		
	public:
		// constructor 
		Box(int l , int b , int h){
			length =l;
			breadth = b;
			height = h;
			
		
	objectcount++;// increases everytime obj is created
}
	
	// simple func 
	double Volume(){
		return length* breadth *height;
	}
	// static member function 
	static int getCount(){
		return objectcount;
	}
	
	
};




int main(){
	cout<<"Checking first object \n";
	Box b(5,6,7);
	b.Volume();
	b.getCount();
	cout<<"\n==== 2nd object ======\n";
	Box b2(1,2,3);
	b2.Volume();
	b2.getCount();
	
	
	
}
