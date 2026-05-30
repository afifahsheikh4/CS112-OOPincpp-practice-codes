// #include <iostream>
// using namespace std;

/*
======= COMPLETE SYNTAX REFERENCE FOR FINAL EXAM =======

============= 1. CLASS BASICS (Your foundation) =============

class ClassName {
private:        // can't access outside class
    int data;
    
protected:      // accessible in derived classes
    int proData;
    
public:         // accessible anywhere
    // ----- CONSTRUCTORS -----
    ClassName() {           // Default constructor
        data = 0;
    }
    
    ClassName(int d) {      // Parameterized constructor
        data = d;
    }
    
    ClassName(int d) : data(d) {}  // Member initializer list (FASTER)
    
    // ----- COPY CONSTRUCTOR (RULE OF THREE) -----
    ClassName(const ClassName &other) {
        data = other.data;   // Deep copy for simple types
    }
    

    -----SHALLOW COPY -----------

    When your class has pointers (especially to dynamically allocated memory),
    the default copy behavior causes problems.
    What it does: Copies only the pointer address, 
    NOT the actual data.

    class ShallowArray {
    int* data;
    int size;
    
public:
    ShallowArray(int s) : size(s) {
        data = new int[size];  // allocate on heap
    }
    
    // NO copy constructor - compiler provides shallow copy
};

int main() {
    ShallowArray arr1(5);
    ShallowArray arr2 = arr1;  // SHALLOW COPY!
    
    // arr1.data and arr2.data point to SAME memory address!
    // arr1.data == arr2.data  (same address)

    // PROBLEM 1: Double delete (when destructor runs)
    // arr1 destructor: deletes memory
    // arr2 destructor: tries to delete SAME memory → CRASH!
    
    // PROBLEM 2: Modifying arr2 affects arr1!
    arr2.data[0] = 100;
    cout << arr1.data[0];  // Prints 100! (unexpected)
    
    // PROBLEM 3: Memory leak if you reassign
    // The original pointer gets overwritten without deleting
}


    =======DEEP COPY =============
   What it does: Creates a NEW copy
    of the actual data in new memory.

    class DeepArray {
    int* data;
    int size;
    
public:
    // Constructor
    DeepArray(int s) : size(s) {  // constructor has 
    //nothing to do with old obj it creates new variable
        data = new int[size];
        for(int i = 0; i < size; i++)
            data[i] = 0;
    }
    
    // Destructor
    ~DeepArray() {
        delete[] data;
    }
    
    // DEEP COPY CONSTRUCTOR (CREATES NEW MEMORY)
    DeepArray(const DeepArray &other) : size(other.size) {
        // 1. Allocate NEW memory
        data = new int[size];
        
        // 2. Copy actual VALUES, not addresses
        for(int i = 0; i < size; i++)
            data[i] = other.data[i];
    }
    
    // DEEP COPY ASSIGNMENT OPERATOR
    DeepArray& operator=(const DeepArray &other) {
        if(this != &other) {
            // 1. Delete old memory
            delete[] data;
            
            // 2. Allocate NEW memory of correct size
            size = other.size;
            data = new int[size];
            
            // 3. Copy VALUES
            for(int i = 0; i < size; i++)
                data[i] = other.data[i];
        }
        return *this;
    }
};



    //======COPY ASSIGNMENT OPERATOR (RULE OF THREE)=======
    ClassName& operator=(const ClassName &other) {
        if (this != &other) {    // Check self-assignment
            data = other.data;
        }
        return *this;             // Return reference to self
    }
    
    // ----- DESTRUCTOR (RULE OF THREE) -----
    ~ClassName() {
        // Clean up dynamic memory here
    }
    
    // ----- GETTER -----
    int getData() const { return data; }  // const = won't modify object
    
    // ----- SETTER -----
    void setData(int d) { data = d; }
};

// ============= 2. INHERITANCE TYPES (Your missing section) =============

// ----- SINGLE INHERITANCE -----
class Base {
public:
    void show() { cout << "Base\n"; }
    virtual void display() { cout << "Base virtual\n"; }  // for overriding
};

class Derived : public Base {  // public, private, or protected
public:
    void show() { cout << "Derived\n"; }  // hides Base::show()
    
    void display() override { cout << "Derived override\n"; }  // overrides virtual
};

// ----- MULTIPLE INHERITANCE -----
class A { public: void a() {} };
class B { public: void b() {} };
class C : public A, public B {};  // inherits from both

// ----- MULTILEVEL INHERITANCE -----
class GrandParent {};
class Parent : public GrandParent {};
class Child : public Parent {};

// ----- HIERARCHICAL INHERITANCE -----
class Vehicle {};
class Car : public Vehicle {};
class Bike : public Vehicle {};

// ============= 3. POLYMORPHISM (Overloading + Overriding) =============

// ----- FUNCTION OVERLOADING (same name, different parameters) -----
void print(int x) { cout << "int: " << x; }
void print(double x) { cout << "double: " << x; }
void print(int x, int y) { cout << "two ints: " << x << y; }

// ----- OPERATOR OVERLOADING (YOUR TEACHER LOVES THIS) -----
class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    
    // Binary operator (+)
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }
    
    // Unary operator (++)
    Complex operator++() {  // prefix: ++obj
        real++;
        return *this;
    }
    
    Complex operator++(int) {  // postfix: obj++
        Complex temp = *this;
        real++;
        return temp;
    }
    
    // Relational operator (==)
    bool operator==(const Complex &other) {
        return (real == other.real && imag == other.imag);
    }
    
    // Subscript operator ([])
    int& operator[](int index) {
        // bounds checking here
        return real;  // example
    }
    
    // Friend for I/O overloading (MUST be non-member)
    friend ostream& operator<<(ostream &out, const Complex &c);
    friend istream& operator>>(istream &in, Complex &c);
};

// Outside class definition
ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << "+" << c.imag << "i";
    return out;
}

istream& operator>>(istream &in, Complex &c) {
    in >> c.real >> c.imag;
    return in;
}

// ----- VIRTUAL FUNCTIONS & OVERRIDING (For runtime polymorphism) -----
class Shape {
public:
    virtual double area() = 0;  // Pure virtual → Abstract class
    virtual void draw() { cout << "Drawing shape\n"; }  // Regular virtual
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override { return 3.14 * radius * radius; }  // MUST implement
};

// ============= 4. FRIEND FUNCTION & FRIEND CLASS (Teacher hinted this) =============

class Secret {
private:
    int password;
    
public:
    Secret() : password(1234) {}
    
    // Friend FUNCTION (not a member, can access private)
    friend void showPassword(Secret &s);
    
    // Friend CLASS (all its functions can access private)
    friend class Hacker;
};

void showPassword(Secret &s) {
    cout << s.password;  // Direct access to private!
}

class Hacker {
public:
    void hack(Secret &s) {
        cout << "Hacked: " << s.password;  // Can access private
    }
};

// ============= 5. DYNAMIC MEMORY ALLOCATION (Heap) =============

// ----- Single variable -----
int *p = new int;      // allocate
*p = 10;
delete p;              // deallocate
p = nullptr;           // good practice

// ----- Array -----
int size = 10;
int *arr = new int[size];   // allocate array
for(int i = 0; i < size; i++)
    arr[i] = i;
delete[] arr;               // deallocate array
arr = nullptr;

// ----- Dynamic 2D array -----
int rows = 3, cols = 4;
int **matrix = new int*[rows];
for(int i = 0; i < rows; i++)
    matrix[i] = new int[cols];

// Don't forget to delete (reverse order)
for(int i = 0; i < rows; i++)
    delete[] matrix[i];
delete[] matrix;

// ============= 6. RULE OF THREE (DEEP COPY EXAMPLE) =============

class DeepArray {
    int *data;
    int size;
    
public:
    // Constructor (allocate)
    DeepArray(int s) : size(s) {
        data = new int[size];
        for(int i = 0; i < size; i++)
            data[i] = 0;
    }
    
    // Destructor (deallocate)
    ~DeepArray() {
        delete[] data;
    }
    
    // Copy Constructor (DEEP COPY - not just pointer)
    DeepArray(const DeepArray &other) : size(other.size) {
        data = new int[size];
        for(int i = 0; i < size; i++)
            data[i] = other.data[i];
    }
    
    // Copy Assignment Operator
    DeepArray& operator=(const DeepArray &other) {
        if(this != &other) {
            delete[] data;                    // delete old
            size = other.size;
            data = new int[size];             // allocate new
            for(int i = 0; i < size; i++)     // copy
                data[i] = other.data[i];
        }
        return *this;
    }
    
    int& operator[](int index) { return data[index]; }
};

// ============= 7. EXCEPTION HANDLING (Try-Catch-Throw) =============

int divide(int a, int b) {
    if(b == 0)
        throw "Division by zero!";           // throw exception
    
    if(b < 0)
        throw -1;                            // can throw any type
    
    return a / b;
}

// Usage in main():
/*
try {
    int result = divide(10, 0);
    cout << result;
}
catch(const char* msg) {
    cout << "Error: " << msg;
}
catch(int code) {
    cout << "Error code: " << code;
}
catch(...) {                                 // catch ANY exception
    cout << "Unknown error";
}
*/

// ============= 8. CONST KEYWORD IN CLASSES =============

// class ConstExample {
//     const int constMember;      // MUST initialize in member initializer list
//     int normalMember;
    
// public:
//     ConstExample(int x) : constMember(x), normalMember(0) {}
    
//     // Const member function (cannot modify any member)
//     int getConst() const {
//         // normalMember = 5;  // ERROR! can't modify
//         return constMember;    // OK, only reading
//     }
    
//     void setNormal(int x) { normalMember = x; }  // non-const
// };

// // Const object can only call const functions
// const ConstExample obj(10);
// // obj.setNormal(5);  // ERROR!
// cout << obj.getConst();  // OK

// // ============= 9. ASSOCIATION, AGGREGATION, COMPOSITION =============

// // ----- ASSOCIATsION (weak, objects exist independently) -----
/* Uses a / knows a relationship they can exist independetly 

*/

// class Doctor {
//     string name;
// public:
//     Doctor(string n) : name(n) {}
// };

// class Patient {
//     string name;
//     vector<Doctor*> doctors;  // Patient HAS-A Doctor (weak)
// };

// // ----- AGGREGATION (weak, child exists without parent) -----
// class Player {};
// class Team {
//     vector<Player*> players;  // Players can exist without Team
// };

// // ----- COMPOSITION (strong, child CANNOT exist without parent) -----
// class Heart {};
// class Human {
//     Heart heart;  // Heart created WITH Human, dies WITH Human
// };

// ============= 10. TYPE CASTING (For inheritance hierarchies) =============

// class BaseCast { virtual void f() {} };  // needs virtual for dynamic_cast
// class DerivedCast : public BaseCast {};

// // ----- static_cast (compile-time, no safety check) -----
// double d = 3.14;
// int i = static_cast<int>(d);  // i = 3

// // ----- dynamic_cast (runtime, safe, requires virtual functions) -----
// BaseCast *basePtr = new DerivedCast();
// DerivedCast *derivedPtr = dynamic_cast<DerivedCast*>(basePtr);
// if(derivedPtr != nullptr) {
//     cout << "Cast successful";
// }

// // ----- const_cast (add/remove const) -----
// const int *constPtr;
// int *mutablePtr = const_cast<int*>(constPtr);

// ============= QUICK REFERENCE: WHEN TO USE WHAT? =============

/*
| Situation                                      | Use
|-----------------------------------------------|----------------------
| Need many objects with same blueprint         | Class
| Need lightweight group of data (C-style)      | Struct
| Need one value from multiple types at a time  | Union
| Need fixed set of named constants             | Enum
| Child "IS-A" parent                           | Inheritance
| Object "HAS-A" another object (strong)        | Composition
| Object "USES-A" another object (weak)         | Association
| Need private member access outside class      | Friend function/class
| Need to prevent object copying                | Delete copy constructor
| Need deep copy of dynamic memory              | Rule of Three
| Want runtime function binding                 | Virtual function
| Forced to implement function in derived class | Pure virtual (=0)
| Want to use +, -, <, etc. on objects          | Operator overloading
| Function same name, different parameters      | Function overloading
| Function same name, same params, different class | Function overriding
| Need variable shared across all objects       | Static member
| Promise function won't modify object          | Const member function
| Need array size at runtime                    | Dynamic allocation
| Program might crash at runtime                | Exception handling
*/

// */

// int main() {
//     cout << "===== SYNTAX REFERENCE FOR FINAL EXAM =====" << endl;
//     cout << "Open this file to quickly copy-paste syntax!" << endl;
//     cout << "\nKey things to remember:\n";
//     cout << "1. Class ends with ; after }\n";
//     cout << "2. delete[] for arrays, delete for single\n";
//     cout << "3. Copy constructor: ClassName(const ClassName&)\n";
//     cout << "4. Assignment operator returns *this\n";
//     cout << "5. Virtual functions need =0 to be pure\n";
//     cout << "6. Friend is declared INSIDE class, defined OUTSIDE\n";
//     cout << "7. Always check nullptr after dynamic_cast\n";
    
//     return 0;
// }