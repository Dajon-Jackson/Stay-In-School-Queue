//Student.h
#include"School.h"
#include<iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student: public School{
	private:
		string gpa; //set as string because math is not necessary
		string status; //status such as freshman
	public:
		Student();
		void setGPA(string);
		void setStatus(string);
		void print();
};
#endif
