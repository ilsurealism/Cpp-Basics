#include <iostream>
using namespace std;

template <class T>
class MyClass {
    public:
        MyClass (T x) {
            cout << x << " - is not a char" << endl;
        }
};

// template specialization - declare another behavior for char. It can not be inherited from child. It need to create another specizalization for child.
template <>
class MyClass<char> {
    public:
        MyClass (char x) {
            cout << x << " - is a char!" << endl;
        }
};

int main() {
    MyClass<int> obj1(42);
    MyClass<double> obj2(42.55);
    MyClass<char> obj3('s');

    return 0;
}