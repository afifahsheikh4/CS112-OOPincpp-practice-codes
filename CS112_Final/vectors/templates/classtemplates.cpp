#include <iostream>
using namespace std;
template <typename T>
class Holder{

    private :
    T data ;

   public:
    // constructor
    Holder(T value ): data(value){}

    // func 
    void show(){
        cout<<data <<endl;
    }

};

int main() {
   Holder h1(42);
   Holder h2(3.145);
   Holder h3("Hello Afifah :)");
   h1.show();
   h2.show();
   h3.show();
    




    return 0;
}


// #include <iostream>
// using namespace std;

// template <typename T>


// class Box{

//     T data;

//     public:
//     Box(T data): data(data) {}

//     void display(){

//         cout<<"The data is :"<<data<<endl;
//     }

// };

// int main() {

//     Box<int> b1(10);

//     Box <string> b2("Aoun");

//     b2.display();
    
//     return 0;
// }