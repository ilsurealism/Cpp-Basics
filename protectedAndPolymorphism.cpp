#include <iostream>
using namespace std;

class Enemy {
    protected: // accessable from childs
        int attackPower;
    public:
        // empty body can be signed as "{}" (empty curly braces) or "= 0" (say what virtual func doesn't have body). "{}" and " = 0" aren't interchangeable
        // if base class virtual func body assigned as "= 0" this virtual func are pure virtual func. In this case child class must declare func what virtual in parent class. 
        // Otherwise error will raise!
        // Classes with pure virual func are abstract. Objects can't be created from abstract classes. Otherwise error will raise!
        virtual void attack() {
            cout << "Enemy! - " << attackPower << endl;
        } // usefull for handling polymorphism. With virtual func pointers tio child objects delared as parent class can call funcs of childs.
        void setAttackPower(int a) {
            attackPower = a;
        }
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "Ninja! - " << attackPower << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster! - " << attackPower << endl;
        }
};

int main() {
    Ninja n;
    Monster m;
    Enemy e;
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    Enemy *e3 = &e;

    e1->setAttackPower(20);
    e2->setAttackPower(80);
    e3->setAttackPower(5);

    n.attack();
    m.attack();
    e.attack();

    n.setAttackPower(30);
    m.setAttackPower(90);
    e.setAttackPower(7);

    n.attack();
    m.attack();
    e.attack();

    // doesn't work without declaration virtual func in parent class!
    e1->attack();  
    e2->attack();
    e3->attack();
}