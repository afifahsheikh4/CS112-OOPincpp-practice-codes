#include <iostream>
#include<vector>
using namespace std;


vector <int> v1={1,2,3};

int main() {
v1.push_back(300);

for(int a :v1){
    cout<<a<<" ";
}

 cout<<v1.front(); // it dispalys vector that is at the top
 // like first no


    
    return 0;
}