#include <iostream>
using namespace std;

class ConstClass
{
    public:
        void constPrintFunc() const;
};

void ConstClass::constPrintFunc() const {
    cout << "Hello! It's const func of const object" << endl;
}

int main() {
    const ConstClass constObj;
    constObj.constPrintFunc();
}