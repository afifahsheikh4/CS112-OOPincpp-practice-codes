#include <iostream>
using namespace std;

int main() {
    int a[6] = {1, 2, 3, 4, 5, 6};
    int i =0;
    a[i + 1] += a[i++];

    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    return 0;
}

