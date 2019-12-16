//Professor.cpp
#include"Professor.h"

Professor::Professor(){
	setTenure("Teacher");
	
}
void Professor::setTenure(string tenure){
	
	this ->tenure = tenure;
	
}
void Professor::print(){
	cout<<"\nThis professor has this information: "<<endl;
	School::print();
	cout<<"Years employed: "<<tenure<<endl;
}
