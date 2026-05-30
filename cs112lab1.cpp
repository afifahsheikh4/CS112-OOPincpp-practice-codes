#include <iostream>
using namespace std; 

  union value{
  	int startnumber;
  	char startcharacter;
  	
  };
  
 struct layerconfig{
   
    string PatternType ;
    string Direction ;
    ValueType ;
    value ;

     };
 struct patternconfig{
    int	matrix size ;
    int total layers ;
    layerconfig layers[10];
    int matrix[10][10];
 };
  // initiliazing 
 void initMatrix(PatternConfig &p) {
    for (int i = 0; i < p.matrixSize; i++)
        for (int j = 0; j < p.matrixSize; j++)
            p.matrix[i][j] = 0;
}

 
 
 
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
	if(pattern == Spiral){
		if(value == Number){
           if(layer % 2 ==0 ){
             cout<<" 1 2 3 4 ....";
     }
 }
}
     else if (value == Character ){ 
        cout<<" A ";
     }
    else {
    	cout<<" C "
	}
}


int main() {
    int matrixsize , layers ;
    patternconfig p;
    cout<<" Enter the matrix size "   <<endl;
    cin >> p.matrixsize;
    cout<<" Enter the no of layers "   <<endl;
    cin>> p.totallayers ;
    
     printPattern(Spiral, 0, Number);
    
    return 0;
}
