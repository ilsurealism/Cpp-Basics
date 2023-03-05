#include <iostream>
using namespace std;

int main() {
    int score = 5;
    int *scorePtr;
    scorePtr = &score;

    cout << score << endl;
    cout << scorePtr << endl;
    cout << *scorePtr << endl;

    score = score + 4;
    score = *scorePtr + 4;
    *scorePtr = *scorePtr + 4;

    cout << score << endl;
    cout << scorePtr << endl;
    cout << *scorePtr << endl;
    
    return 0;
}
