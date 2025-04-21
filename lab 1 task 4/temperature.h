#include <iostream>
using namespace std;
class Temperature {
public:
    float celsius; 
//member functions
    float convertToFahrenheit(); 
    void displayFahrenheit();   
};

// Definition  outside the class
float Temperature::convertToFahrenheit() {
    return (celsius * 9.0 / 5.0) + 32;
}
void Temperature::displayFahrenheit() {
    float fahrenheit = convertToFahrenheit();
    cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;
}