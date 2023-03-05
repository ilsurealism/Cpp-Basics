#include <iostream>
using namespace std;

int main() {
    // dynamic memory - _heap
    // static memory - stack

    // int *p = NULL;
    int *p = new int; // request memory - like malloc() in C
    *p = 5; // store value (in heap)
    
    cout << *p << endl; // use value

    delete p; // free up the memory - like free() in C

    p = new int;
    *p = 10;

    cout << *p << endl; // use value

    delete p;

    int *arr = NULL; // Pointer initialized with null
    arr = new int[20]; // request memory
    delete [] arr; // Delete array pointed to by arr

    return 0;
}