#include <iostream>
using namespace std;

int main() {
    try {
        int motherAge = 29;
        int sonAge = 36;
        if (sonAge > motherAge) {
            throw 99;
        }
    }
    catch (int x) { // to handle any type of error add catch(...) instead of catch (int x)
        cout << "Wrong age values - Error " << x;
    }

    return 0;
}