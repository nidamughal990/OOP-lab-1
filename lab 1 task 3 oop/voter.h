#include <iostream>
using namespace std;
class Voter {
public:
	//data members
    string name;
    int age;
    public:
//member function
    void setDetails();
    bool isEligible(); 
    
};
// Definition outside the class
void Voter::setDetails(){
	cout<<"enter your name";
	cin>>name;
	cout<<"enter your age"<<endl;
	cin>>age;
}
bool Voter::isEligible() {
    return age >= 18;
}
