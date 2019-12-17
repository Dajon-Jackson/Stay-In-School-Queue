//School.cpp
#include"School.h"
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
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
void School::persist(){
	key = 'h';
	for(int i = 0; i < first_name.length(); i++)
	{
		en_first_name += first_name[i] ^ key;
	}
	for(int i = 0; i < last_name.length(); i++)
	{
		en_last_name += last_name[i] ^ key;
	}
	for(int i = 0; i < age.length(); i++)
	{
		en_age += age[i] ^ key;
	}
	for(int i =0; i < id.length(); i++)
	{
		en_id += id[i] ^ key;
	}
	
	outData.open("JJSchoolRecords.txt", ios::app);
	outData<<en_first_name<<" "<<en_last_name<<" "<<en_age<<" "<<en_id<<" ";
	outData.close();
}
