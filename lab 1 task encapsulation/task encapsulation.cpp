#include <iostream>
#include "product.h"
using namespace std;

int main(){
	product p;
	p.setname("Lays");
	p.setprice(30);
	p.setquantity(2);
	cout<<"name:"<<p.getname()<<endl;
	cout<<"price:"<<p.getprice()<<endl;
	cout<<"quantity:"<<p.getquantity()<<endl;
}