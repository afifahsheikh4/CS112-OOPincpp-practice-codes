#include<iostream>
#include <string>
#include <algorithm>

bool isVowel(char c) {
    static const std::string v = "AEIOUaeiou";
    return v.find(c) != std::string::npos;   // find returns npos if not present
}

// iterate with a pointer
int findvowels(char *s) {
    int sum = 0;
    for (char *p = s; *p; ++p) {         // p points to each character in turn
        if (isVowel(*p))
            sum += (p - s);              // index of the character
    }
    return sum;
}