#include <iostream>
using namespace std;

class Voter {
public:
    string name;
    int age;

    bool isEligible(); 
};

// Definition of isEligible() outside the class
bool Voter::isEligible() {
    return age > 18;
}


