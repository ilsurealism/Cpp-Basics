#include <iostream>
using namespace std;

template <class T, typename U>
T smaller(T a, U b) {
    return (a < b ? a : b);
}

int main() {
    int x = 72;
    double y = 15.94;
    
    cout << smaller(x, y) << endl;
    
    return 0; 
}