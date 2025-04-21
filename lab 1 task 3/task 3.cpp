#include <iostream>
#include "voter.h"
using namespace std;

int main() {
    Voter v;
    
    cout << "Enter your name: ";
    cin >> v.name; 
    
    cout << "Enter your age: ";
    cin >> v.age;

    if (v.age >= 18) {
        cout << v.name << ", you are eligible to vote." << endl;
    } else {
        cout << v.name << ", you are NOT eligible to vote." << endl;
    }

    return 0;
}
