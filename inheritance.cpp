#include <iostream>
using namespace std;

class Mother
{
    public:
        Mother() {
            cout << "Mother ctor" << endl;
        };
        ~Mother() {
            cout << "Mother dtor" << endl;
        };
        void sayHi() {
            cout << "Hi" << endl;
        }
};

class Daughter: public Mother // can't be inherited: constructors/destructors, operator overloadings and friend. "public" clause means child inherit all do public all public from parent class 
{
    public:
        Daughter() {
            cout << "Daughter ctor" << endl;
        };
        ~Daughter() {
            cout << "Daughter dtor" << endl;
        };
};

int main() {
    Daughter d;
    d.sayHi();
    return 0;
}