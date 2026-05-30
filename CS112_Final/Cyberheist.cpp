#include <iostream>
using namespace std;

//abstract class 
class Agent{
   private:
    string AgentID;
    int nodeshacked;
    double bandwidth;
  public:
  // mmeber initilizer list
    Agent(string a , int n , double b ): AgentID(a) , nodeshacked(n),bandwidth(b){}

    // pure virtual func 
    virtual void operate()=0;
};

class Networkstate{
    Agent agent;
    int totalresources =100;
  public:
    enum status{ Firewall ,Open , Encrypted};
    double bandwidth_cost;
  
    Networkstate(string status ,double band ){
        this.
    }


};




int main() {
    
    return 0;
}