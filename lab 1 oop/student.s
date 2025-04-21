#include <iostrem>
using namespace st
d;
class student{
	public:
	
	string name;
	int rollno;
	float marks;
	
	void getdata(){
		cout<<"enter the student name"<<endl;
		cin>>name;
		cout<<"enter the roll number"<<endl;
		cin>>rollno;
		cout<<"enter the marks"<<endl;
		cin>>marks;
	}
	void displaydata(){
		cout<<"name :"<<name<<endl;
		cout<<"rollno :"<<rollno<<endl;
		cout<<"marks :"<<marks<<endl;
	}
};