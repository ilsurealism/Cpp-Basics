#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass(); // constructor
        ~MyClass(); // destructor (always starts with tilda)
};

MyClass::MyClass()
{
    cout << "Constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}

int main() {
    MyClass obj;
}