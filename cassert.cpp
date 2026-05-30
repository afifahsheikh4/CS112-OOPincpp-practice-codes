//#include <iostream>
//#include <cassert>
//using namespace std;
//
//int main(){
//	int ptr ;
////    int null;
////    char ptr = null ;
//    assert(ptr != NULL);
//
//    cout <<" Program will run "<<endl;
//    return 0;
//
//}

#include <iostream>
#include <cassert>
using namespace std;

int p = NULL;
void printValue(int* p) {
	
    assert(p != NULL);   // pointer must be valid
    cout << *p << endl;
}

int main() {
    int x = 10;
    printValue(&x);

    return 0;
}

