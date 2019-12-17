//Professor.cpp
#include"Professor.h"
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
Professor::Professor(){
	setTenure("Teacher");
	
}
void Professor::setTenure(string tenure){
	
	this ->tenure = tenure;
	
}
void Professor::print()
{
	cout<<"\nThis professor has this information: "<<endl;
	School::print();
	cout<<"Years employed: "<<tenure<<endl;
}
void Professor::persist()
{
	key = 'h';
	for(int i = 0; i < tenure.length(); i++)
	{
		en_tenure += tenure[i] ^ key;
	}
	outData.open("JJSchoolRecords.txt", ios::app);
	outData<<"p ";
	School::persist();
	outData<<en_tenure<<endl;
	outData.close();
}
