#include <iostream>
using namespace std;

class BankAccount {
    public:
        void sayHi() {
            cout << "Hi!" << endl;
        }
};

class Bird {
    public:
        void makeSound() {
            cout << "chirp-chirp" << endl;
        }
};

// private exmaple
class myClass {
    // default access specification - private
    public:
        // constructor. It's a special function and it's without type of function. It can contain arguments
        myClass(string nm) {
            cout << "Hey!" << endl;
            setName(nm);
        }
        void setName(string x) {
            name = x;
        }

        void getName() {
            cout << name << endl;
        }
    private:
        string name;
};

int main() {
    BankAccount test;
    test.sayHi();

    Bird birdObj;
    birdObj.makeSound();

    myClass myObj("Ronal");
    myObj.setName("Dinho");
    myObj.getName();

    return 0;
}