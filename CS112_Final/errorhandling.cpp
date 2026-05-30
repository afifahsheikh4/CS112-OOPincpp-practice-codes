#include <iostream>
#include<fstream> // to open a file 

using namespace std;
ifstream obj("data.txt");




int main() {
    // to create a file
    ofstream myfile("data.txt");
    myfile<<"10 20 30 40 50 60 70 80 90 100 110"<<endl;

    myfile.close();
    



    return 0;
}