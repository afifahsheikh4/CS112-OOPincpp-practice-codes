#include <iostream>
#include<string>
using namespace std;

struct field{
// struct is public by default 

// dynamically allocating memory 
string str; // variables 
};

int main() {
  field *s = new field;  
  s->str ="Hello guys ";
  cout<<"String : "<<s->str;

delete s;

    return 0;
}