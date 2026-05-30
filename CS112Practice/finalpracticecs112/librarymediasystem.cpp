#include <iostream>
#include <string>  // IMPORTANT: Add this for string class
using namespace std;

// ----abstract class----
// abstract class's object cannot be created
class MultimediaItem{
public:
    string title;
    
    // default constructor 
    MultimediaItem() {};
    
    // parameterized constructor
    MultimediaItem(string t) : title(t) {}; 
    
    // pure virtual function: means each class will have its own definition 
    virtual void displayInfo() = 0;
    
    // virtual destructor 
    virtual ~MultimediaItem() {};
    
    // virtual function so that derived classes can override it 
    virtual string getTitle() {
        return title;
    }
};

// -----BOOK CLASS---------
class Book : public MultimediaItem {
public:
    string author;
    int ISBN;
    
    // parameterized constructor : member initializer list
    Book(string t, string a, int i) : MultimediaItem(t), author(a), ISBN(i) {}
    
    string getTitle() override {
        cout << "Title of book : " << title << endl;
        return title;
    }
    
    // overrides pure virtual func from abstract class
    void displayInfo() override {
        cout << "----BOOK INFO-----" << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "ISBN : " << ISBN << endl;
    }
};

// -----DVD CLASS-----------
class DVD : public MultimediaItem {
public:
    string director;
    int duration;
    
    // NO need to redeclare title here (inherited from base)
    DVD(string t, string d, int dur) : MultimediaItem(t), director(d), duration(dur) {}
    
    // overriding getTitle function 
    string getTitle() override {
        return title;
    }
    
    // overriding display function
    void displayInfo() override {
        cout << "----DVD INFO-----" << endl;
        cout << "Title : " << title << endl;
        cout << "Director : " << director << endl;
        cout << "Duration : " << duration << " minutes" << endl;
    }
};

// class LibraryCard - Multimedia pointer (association relationship)
class LibraryCard {
public:
    int cardID;
    MultimediaItem *item; // association has-a relationship
    
    // default constructor 
    LibraryCard() : cardID(0), item(nullptr) {};
    
    // parameterized constructor 
    LibraryCard(int id, MultimediaItem *i = nullptr) : cardID(id), item(i) {};
    
    // overloading of == operator 
    bool operator==(LibraryCard &other) {
        if (item == nullptr || other.item == nullptr) {
            cout << "Cannot compare: one or both items are null" << endl;
            return false;
        }
        return item->getTitle() == other.item->getTitle();
    }
    
    // Declare friend function
    friend void printCheckoutDetails(const LibraryCard& card);
};

// Friend function definition (OUTSIDE the class, NO LibraryCard::)
void printCheckoutDetails(const LibraryCard& card) {
    cout << "Checking card no : " << card.cardID << endl;
    if (card.item != nullptr) {
        card.item->displayInfo();
    } else {
        cout << "No item checked out!" << endl;
    }
}

int main() {
    cout << "=====LIBRARY MANAGEMENT SYSTEM=====" << endl << endl;
    
    // Create objects
    Book b1("Revive Your Heart", "Nouman Ali Khan", 1234);
    Book b2("The Sealed Nectar", "Safiur Rahman Mubarakpuri", 5678);
    DVD dvd1("The Message", "Moustapha Akkad", 177);
    
    // Creating library cards (association)
    LibraryCard card1(101, &b1);
    LibraryCard card2(102, &b2);
    LibraryCard card3(103, &dvd1);
    LibraryCard card4(104, &b1);
    
    // Display item info using friend function
    cout << "--- Card 1 Details ---" << endl;
    printCheckoutDetails(card1);
    
    cout << "\n--- Card 2 Details ---" << endl;
    printCheckoutDetails(card2);
    
    cout << "\n--- Card 3 Details ---" << endl;
    printCheckoutDetails(card3);
    
    // Test operator overloading (==)
    cout << "\n=== Comparing Cards ===" << endl;
    
    if (card1 == card2) {
        cout << "Card 1 and Card 2 have the SAME item" << endl;
    } else {
        cout << "Card 1 and Card 2 have DIFFERENT items" << endl;
    }
    
    if (card1 == card4) {
        cout << "Card 1 and Card 4 have the SAME item (both have 'Revive Your Heart')" << endl;
    } else {
        cout << "Card 1 and Card 4 have DIFFERENT items" << endl;
    }
    
    cout << "\nProgram ending normally" << endl;
    return 0;
}