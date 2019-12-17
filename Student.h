//Student.h
#include"School.h"
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student: public School{
	private:
		string gpa; //set as string because math is not necessary
		string en_gpa;
		string status; //status such as freshman
		string en_status;
		char key;
		ofstream outData;
	public:
		Student();
		void setGPA(string);
		void setStatus(string);
		void print();
		void persist();
};
#endif
