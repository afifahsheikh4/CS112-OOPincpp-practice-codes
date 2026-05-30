//4.Nested Control & Sentinel Repetition
//A "Sentinel-controlled" loop that models a generative AI "token" limit logic

#include <iostream>
using namespace std;

int main() {
    int token = 15;
    int limit = 50;
    int count = 0;

    while (token != -1) {
        if (token % 2 == 0) {
            for (int i = 0; i < 2; i++) {
                token += 5;
                if (token > limit) break;
            }
        } else {
            token = (token * 3) / 2;
        }

        count++;
        if (count > 3) token = -1; // Sentinel trigger
        cout << "T: " << token << " ";
    }
    return 0;
}


//3. Data Representation: Binary-Style Logic
//This code simulates how data is processed at a bit-level (conceptually) using arrays and mathematical operators (CLO 2).

//#include <iostream>
//using namespace std;
//
//int main() {
//    int data[] = {1, 0, 1, 1}; // Representing 11 in binary
//    int multiplier = 2;
//    int result = 0;
//
//    for (int i = 0; i < 4; i++) {
//        int bitValue = 1;
//        for (int j = 0; j < (3 - i); j++) {
//            bitValue *= multiplier;
//        }
//        result += (data[i] * bitValue);
//    }
//
//    int finalVal = (result >> 1) + (result % 3); 
//    cout << "Result: " << result << " Final: " << finalVal << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int x = 10; // Global
//
//void mystery(int& a, int b) {
//    static int x = 2; 
//    a = a + x++;
//    b = b + ::x; // Accessing global x
//    cout << "Inside: " << a << " " << b << " " << x << endl;
//}
//
//int main() {
//    int x = 5;
//    int y = 20;
//    
//    mystery(x, y);
//    cout << "Main 1: " << x << " " << y << endl;
//    
//    {
//        int x = 100;
//        mystery(x, y);
//        cout << "Inner: " << x << endl;
//    }
//    
//    mystery(x, y);
//    cout << "Main 2: " << x << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include <iostream>
////using namespace std;
////
////void adjustWeights(int* w , int size, int& bias) {
////    static int adjustmentCount = 0;
////    for (int i = 0; i < size; i++) {
////        if (*(w + i) < bias) {
////            *(w + i) += (bias % 3);
////        } else {
////            *(w + i) -= 1;
////        }
////    }
////    bias += ++adjustmentCount;
//
////}
////
////int main() {
////    int weights[] = {10, 5, 8};
////    int threshold = 7;
////    int* ptr = weights;
////
////    adjustWeights(ptr, 3, threshold);
////    cout << weights[0] << " " << weights[1] << " " << threshold << endl;
////
////    adjustWeights(weights, 3, threshold);
////    cout << weights[2] << " " << threshold << endl;
////    
////    return 0;
////}
