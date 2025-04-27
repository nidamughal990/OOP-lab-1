#include <iostream>
#include "voter.h"
using namespace std;
int main(){
	Voter v;
	v.setDetails();
	//check eligiblity
  if(v.isEligible()){
	cout<<"v.name :"<<"you are eligible"<<endl;
}
else{
	cout<<"v.name :"<<"you are not eligible"<<endl;
	}
}
  