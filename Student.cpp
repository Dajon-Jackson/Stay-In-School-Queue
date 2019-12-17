//Student.cpp
#include"Student.h"
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
Student::Student()
{
	setGPA("");
	setStatus("");
}
void Student::setGPA(string g)
{
	if(g != "0")
		gpa = g;
	else
		gpa = "0";
}
void Student::setStatus(string s)
{
	if(s != "")
		status = s;
	else
		status = "";
}
void Student::print(){
	cout<<"\nThis student has this information: \n";
	School::print();
	cout<<"GPA: "<<gpa<<"\n"
	<<"Status: "<<status<<endl;
}
void Student::persist()
{
	key = 'h';
	for(int i = 0; i < gpa.length(); i++)
	{
		en_gpa += gpa[i] ^ key;
	}
	for(int i = 0; i < status.length(); i++)
	{
		en_status += status[i] ^ key;
	}
	outData.open("JJSchoolRecords.txt", ios::app);
	outData<<"s ";
	School::persist();
	outData<<en_gpa<<" "<<en_status<<endl;
	outData.close();
}
