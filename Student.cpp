//Student.cpp
#include"Student.h"
#include<iostream>
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
