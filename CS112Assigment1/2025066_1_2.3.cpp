#include <iostream>
using namespace std;

int pascaltriangle(int rows , int columns ){
// base case 
if (rows == columns || columns ==0){
    return 1 ;
}

return pascaltriangle(rows-1 , columns-1) + pascaltriangle(rows, columns-1);
}

int main() {
    int rows , columns ;
   
    for(int i=0 ; i<=6 ;i++ ){
    for(int j=0 ; j<=i ; j++){
        cout<<pascaltriangle(i,j)<<" ";

    }
    cout<<endl;
}
   
   cout<<"Row : ";
   cin>>rows;
   cout<<"Coulmn : ";
   cin>>columns ;
   // toget desired value
   if(int i=rows){
    if(int j=columns){
        cout<<pascaltriangle(i,j)<<" ";
    }
    cout<<endl;
   } 
 return 0;
}