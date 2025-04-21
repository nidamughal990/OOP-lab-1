#include <iostream>
#include "temperature.h"
using namespace std;
int main() {
    Temperature temp;

    cout << "Enter temperature in Celsius: ";
    cin >> temp.celsius;

    temp.displayFahrenheit(); 

}
