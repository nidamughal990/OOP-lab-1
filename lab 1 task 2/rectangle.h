#include <iostream>
using namespace std;
class rectangle{
	public:
//		data members
	int length;
	int width;
//	member functions
	void setdimension();
	int area();
	int perimeter();

};
void rectangle::setdimension(){
	cout<<"enter the length"<<endl;;
	cin>>length;
	cout<<"enter the width"<<endl;
	cin>>width;}
	int rectangle::area(){
		return length*width;}
	int rectangle::perimeter(){
	return 2*length*width;
	} 