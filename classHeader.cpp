#include "classHeader.h"
#include <iostream>
using namespace std;

ClassHeader::ClassHeader()
{
    cout << "This is class defined in Header File" << endl;
}
ClassHeader::~ClassHeader()
{
    cout << "This is destructor of class defined in Header File" << endl;
}

int main() {
    ClassHeader objHeader;
    ClassHeader *ptr = &objHeader; // pointer to object
}