#include <iostream>
using namespace std; 

// Enum definitions 
enum Patterntype {
     Spiral,
     Diamond
};
enum Valuetype{
     Number,
     Character
};
enum Direction{
    Clockwise,
    Anticlockwise
};

// pattern logic 
void displayPattern (Patterntype pattern , int layer , Valuetype value){
     if(layer % 2 ==0 ){
        cout<<" 1 2 3 4 ....";
     }
     else if (layer %2!=0){
        cout<<" A B C D .....";
     }

}
// inputing data 
 //int i , j;
// int arr{


// }

// struct layerconfig{
   
//     string PatternType;
//   string Direction;
//   ValueType
//  Union value

// };

int main() {
    int i , j;
    cout<<" Enter the size "   <<endl;
    cout<<" Enter the size "   <<endl;
    return 0;
}