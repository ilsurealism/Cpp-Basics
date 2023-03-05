#include <iostream>
using namespace std;

class Birthdate {
    public:
        Birthdate(int m, int d, int y)
        : month(m), day(d), year(y)
        {}
        void printDate()
        {
            cout << month << "/" << day << "/" << year << endl;
        }
    private:
        int month;
        int day;
        int year;
};


class Person {
    public:
        Person(string n, Birthdate b)
        : name(n), bd(b)
        {}
        void printInfo()
        {
            cout << name << endl;
            bd.printDate();
        }
    private:
        string name;
        Birthdate bd;
};

int main() {
    Birthdate bd(2, 21, 1996);
    Person p("Lemar", bd);
    p.printInfo();
}