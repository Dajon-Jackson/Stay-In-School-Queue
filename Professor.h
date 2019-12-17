//Professor.h
#include"School.h"
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

#ifndef PROFESSOR_H
#define PROFESSOR_H
class Professor: public School{
	
private:
string tenure;
string en_tenure;
char key;
ofstream outData;

public:
Professor();
void setTenure(string);
void print();
void persist();
};
#endif
