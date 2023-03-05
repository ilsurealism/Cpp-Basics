#include <iostream>
using namespace std;

class  MyClass
{
private:
    /* data */
public:
     MyClass(/* args */);
    ~ MyClass();
    void MyPrint();
};

 MyClass:: MyClass(/* args */)
{
}

 MyClass::~ MyClass()
{
}

void MyClass::MyPrint() {
    cout << "Hello" << endl;
}

int main() {
    MyClass obj;
    MyClass *ptr = &obj;
    ptr -> MyPrint(); // calling object func from obj pointer 
}