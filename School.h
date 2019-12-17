//School.h
#include<string>
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

protected:
string first_name;
string last_name;
string age;
string id;
	
};
#endif
