#include <iostream>
using namespace std;
class product{
	private:
		//data members
		string name;
		double price;
		int quantity;
		public:
			void setname(string n){
				if (!n.empty()){
				name=n;}
				else{
				cout<<"name cannot be empty";
		}
			}
			void setprice(double p){
				if (p>0){
			price=p;}
				else {
				cout<<"invalid amount"<<endl;
			}
		}
	
			void setquantity(int q){
				if(q>=0){
				quantity=q;
			}
			else{
				cout<<"invalid"<<endl;
			}
		}
		string getname(){
			return name;
		}
		float getprice(){
			return price;
		}
		double getquantity(){
			return quantity;
		}
};