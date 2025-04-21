#include <iostream>
using namespace std;
class student{
	public:
//		data members
	string name;
	int rollno;
	float marks;
//	members functions
	void getdata(){
		cout<<"Enter the name"<<endl;
		cin>>name;
		cout<<"Enter roll number"<<endl;
		cin>>rollno;
		cout<<"enter marks"<<endl;
		cin>>marks;
	}
	void displaydata(){
		cout<<"name :"<<name<<endl;
		cout<<"rollno:"<<rollno<<endl;
		cout<<"marks:"<<marks<<endl;
	}
};