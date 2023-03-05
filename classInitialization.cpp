#include "classInitialization.h"
#include <iostream>
using namespace std;

InitClass::InitClass(int a, int b)
: regVar(a), constVar(b) // const initialization - list of init
{
    cout << regVar << endl;
    cout << constVar << endl;
}

int main() {
    InitClass initObj(54, 77);
}