#include <iostream>
using namespace std;

void Upperrows(int n,int leftstars, int spaces , int rightstars, int columns){
      //base case
     if (rightstars >columns ){ // means it will print
        cout<<endl; // means if in any row columns increases by 2n shift control to next line  
      }
     //working inisde row 
     leftstars= n;
     spaces=0; // means 0 for row1 
     spaces+=2;
     rightstars=leftstars;
     

    // recursive function
    Upperrows(n,--n ,spaces ,rightstars , 2*n); 
    }

    // 


int main() {
    int n;
    // cout<<"Enter no of stars : ";
    // cin>>n;
    Upperrows(5,5,0,5,10);
    return 0;
}