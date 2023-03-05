#include <iostream>
using namespace std;

class MyClass
{
    private:
        int var;
    public:
        MyClass(int a) : var(a)
        {}
        void printInfo() {
            cout << var << endl;
            cout << this->var << endl;
            cout << (*this).var << endl;
        }
};

int main() {
    MyClass obj(42);
    obj.printInfo();
}
