#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s; // Takes a single word (no spaces)

    int n = s.length();

    // 1. Reverse the string
    string rev = "";
    for (int i = n - 1; i >= 0; i--) {
    rev += s[i];
    }
    cout << "Reversed: " << rev << endl;

    // 2. Count Vowels
    int vowels = 0;
    for (int i = 0; i < n; i++) {
    char c = s[i];
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
    vowels++;
        }
    }
    cout << "Vowels: " << vowels << endl;

    // 3. Palindrome Check
    bool isPalin = true;
    if (s != rev) {
    isPalin = false;
    }

    if (isPalin) {
    cout << "It is a palindrome." << endl;
    } else {
    cout << "Not a palindrome. \n Substrings:" << endl;

        // 4. Find Substrings (Nested Loops)
    for (int i = 0; i < n; i++) {
    for (int len = 2; i + len <= n; len++) {
                
    // Get substring manually
    string sub = "";
    for (int k = i; k < i + len; k++) {
    sub += s[k];
    }

     // Check if 'sub' is a palindrome
    bool subIsPalin = true;
    int subN = sub.length();
    for (int m = 0; m < subN / 2; m++) {
    if (sub[m] != sub[subN - 1 - m]) {
    subIsPalin = false;
    break;
    }
    }

    if (subIsPalin) {
    cout << sub << endl;
    }
    }
    }
    }

    return 0;
}
