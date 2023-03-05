#include <iostream>
using namespace std;

int main() {
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "string: " << sizeof(string) << " bytes\n";
    int var = 50;
    int *varPtr;
    long int arr[100];
    string str = "Hello C++!";
    cout << "var: " << sizeof(var) << " bytes\n";
    cout << "varPtr: " << sizeof(varPtr) << " bytes\n";
    cout << "arr[100]: " << sizeof(arr) << " bytes\n";
    cout << "str: " << sizeof(str) << " bytes\n";

    return 0;
}