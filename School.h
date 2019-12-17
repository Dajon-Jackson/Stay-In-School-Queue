//School.h
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
#ifndef SCHOOL_H
#define SCHOOL_H
class School{
	
public:
School();
School(string, string, string, string);
void setName(string, string);
void setAge(string);
void setID(string);
virtual void print();
virtual void persist();

protected:
string first_name;
string en_first_name;
string last_name;
string en_last_name;
string age;
string en_age;
string id;
string en_id;
char key;
ofstream outData;
	
};
#endif
