#include <iostream>
using namespace std;
class rectangle{
	public:
	int length;
	int width;
	void setdimension();
	double area();
	double perimeter();
};
void rectangle::setdimension(){
	cout<<"enter the length"<<endl;;
	cin>>length;
	cout<<"enter the width"<<endl;
	cin>>width;}
	double rectangle::area(){
		return length*width;
	}
	double rectangle::perimeter(){
		return 2*length*width;
	} 
	int main(){
		rectangle r;
		r.length;
		r.width;
		r.setdimension();
		r.area();
		r.perimeter();
	}
