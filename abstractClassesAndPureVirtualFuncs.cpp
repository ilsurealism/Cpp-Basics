#include <iostream>
using namespace std;

class Enemy {
    public:
        // empty body can be signed as "{}" (empty curly braces) or "= 0" (say what virtual func doesn't have body). "{}" and " = 0" aren't interchangeable
        // if base class virtual func body assigned as "= 0" this virtual func are pure virtual func. In this case child class must declare func what virtual in parent class. 
        // Otherwise error will raise!
        // Classes with pure virual func are abstract. Objects can't be created from abstract classes. Otherwise error will raise!
        virtual void attack() = 0; // usefull for handling polymorphism. With virtual func pointers to child objects delared as parent class can call funcs of childs.
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "Ninja!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster!" << endl;
        }
};

int main() {
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    n.attack();
    m.attack();

    // doesn't work without declaration virtual func in parent class!
    e1->attack();  
    e2->attack();

    return 0;
}