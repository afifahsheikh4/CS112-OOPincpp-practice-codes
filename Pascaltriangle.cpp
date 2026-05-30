#include<iostream>
using namespace std;

int Pascaltriangle(int rows , int columns){
	// base case
	if (columns ==0 || rows ==columns){
		return 1;
	}
	// Pascal traingle 
	return Pascaltriangle(rows -1,columns -1)+Pascaltriangle(rows -1, columns);
	}
int main(){
	int rows;
	cout<<" Enter number of rows : ";
	cin>>rows;
		// for rows 
	for (int i =0 ; i<rows ; i++){  // i < n but still if we input rows=5, 5 rows will be printed coz row 0 also execute  
 		for(int j=0 ; j<=i ;j++ ){
 			cout<<Pascaltriangle(i , j)<<" ";
 			 }
			cout<<endl;	
		}
	}



