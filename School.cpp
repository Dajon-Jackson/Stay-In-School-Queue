//School.cpp
#include"School.h"
#include<iostream>
#include<string>

School::School(){
	
	setName("", "");
	setAge("0");
	setID("xxxxx");
}

School::School(string first, string last, string age, string id){
	
	setName(first, last);
	setAge(age);
	setID(id);
}
void School::setName(string first, string last){
	first_name = first;
	last_name = last;
}
void School::setAge(string a){
	
	if(a != "0")
		age = a;
	else
		age = "0";
}
void School::setID(string i){
	
	if(i != "xxxxx")
		id = i;
	else
		id = "xxxxx";
}
void School::print(){
	cout<<"Name: "<<first_name<<" "<<last_name<<"\n"
	<<"Age:"<<age<<"\n"
	<<"ID:"<<id<<endl;
}
