#include <iostream>
using namespace std;

template <class T>
// template <typename T> // typename = class

T sum(T a, T b) {
    return a + b;
}

int main() {
    int x = 7, y = 5;
    double z = 45.55, k = 89.21;

    cout << sum(x, y) << endl << sum(z, k) << endl;

    return 0;
}