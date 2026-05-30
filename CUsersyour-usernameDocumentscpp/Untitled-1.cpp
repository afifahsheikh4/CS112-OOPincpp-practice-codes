
#include <iostream>
using namespace std;
struct BOOK{
    int prize;
};
struct Car{
  int model ;
  string name;
  float price;
} C1;
int main() {
  BOOK p; // declaration of a variable
  p.prize=500;
  C1={.model=2020 , .name="Corolla" , .price=2000000};
  cout<<p.prize<<endl;
  cout << C1.model<<endl;
  cout<<C1.name<<endl;
  cout<<C1.price<<endl;
 return 0;
}
