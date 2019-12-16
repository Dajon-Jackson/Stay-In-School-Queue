//Professor.h
#include<iostream>
#include"School.h"
using namespace std;

#ifndef PROFESSOR_H
#define PROFESSOR_H
class Professor: public School{
	
	private:
	string tenure;
	
	public:
	
	Professor();
	void setTenure(string);
	void print();
};
#endif
