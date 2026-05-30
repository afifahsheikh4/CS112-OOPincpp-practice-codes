#include <iostream>
using namespace std;

class Book; // forward declaration

// ----abstract class----
// abstract class's object cannot be created
class MultimediaItem{
   
  public:

   // default constructor 
   MultimediaItem(){}; 



  // pure virtual function: means each class will have its 
  ///own definition 
  virtual void displayInfo()=0;

  // method ???????see this thing 
  string getTitle();

  // virtual destructor 
    virtual  ~MultimediaItem(){};

    //friend function
    friend string getTitle();

};
class Book :public MultimediaItem{
     public:
    // data members 
    string title;
    string author;
    int ISBN;
    
    // parameterized constructor : member initilizer list
    Book(string t , string a, int i): title(t) ,author(a),ISBN(i){}

    string getTitle(){
        cout<<"Titke of book : "<<title<<endl;
    }
   

    // overrides pure virtual func from abstract class
    void displayInfo(){
    cout<<"----BOOK INFO-----\nAuthor : "<<author<<endl;
}
};



class DVD: public MultimediaItem{
    public:
    string title ;
    string director ;
    int duration;
    

    /* Q. When to call default constructor ?
    A. if base class has no default constructor then child
       class must expilicity define it and calls base's 
       parameterized constructor.
    
    */
    DVD () : MultimediaItem (){};
    DVD(string t , string d, int a):title(t),director(d),duration(a){}

    // overriding display function
    void displayInfo(){
        cout<<"Director : "<<director<<endl;
    }


};

// class LibraryCard -------> Multimedia pointer(associationrelationship)
class LibraryCard{
    public:
      int card1;
      int card2;
      MultimediaItem *item;
      Book *b;

      //default constructor 
      LibraryCard (){};
    // parameterized constructor 
    LibraryCard(int c1 , int c2) :card1(c1),card2(c2),item(nullptr),b(nullptr) {};
    
      // overloading of == operator 
    bool  operator==(LibraryCard &other ){
        if(item==nullptr || other.item==nullptr){
            cout<<"OPerator overloading ";
            return false;
        }
        return item->getTitle()==other.item->getTitle();
    }    
 


};




int main() {
    
    Book b("Revive your heart" , "Nouman Ali Khan",1234);
    b.displayInfo();

    //creating objects 
    DVD d("MP", "Nadeem Baig",60);
    d.displayInfo();
    
    LibraryCard lib(1,2);
    if(lib.card1==lib.card2){

    cout<<"In main"<<endl;
    }
    return 0;
}