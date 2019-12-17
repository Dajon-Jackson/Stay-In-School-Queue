//StayInSchool.cpp
#include<iostream>
#include<fstream>
#include<queue>
#include<string>
#include"School.h"
#include"Professor.h"
#include"Student.h"
using namespace std;


int main(int argc, char** argv)
{
	//Data Input
	queue<School*> scPTR;
	queue<School*> scBFR; //buffer for temporary storage of popped elements
	string fname, lname, id, age, gpa, status, tenure, position;	
	int counter = 0;
	int choice;
	//File I/O
	char key = 'y';
	ofstream outData;

	do
	{
		//Menu choice
		system("CLS");
		cout<< "1)Enter a Student\n2)Enter a Professor\n3)Read Current Data\n4)Exit \n:";
		cin>>choice;
  
		//Input
		switch(choice)
		{
			case 1:
			{
				Student* s = new Student;
				cout<<"\nEnter the student's first name, last name, age, ID number, GPA, and status: ";
				cin>>fname>>lname>>age>>id>>gpa>>status;
				s->setName(fname, lname);
				s->setAge(age);
				s->setID(id);
				s->setGPA(gpa);
				s->setStatus(status);
				scPTR.push(s);
				
				counter++;
				break;
    		}
			case 2:
			{
				Professor* p = new Professor;
	    		cout<<"\nEnter the professor's first name, last name, age, ID number, and years worked: ";
	    		cin>>fname>>lname>>age>>id>>tenure;
	    		p->setName(fname, lname);
				p->setAge(age);
	    		p->setID(id);
				p->setTenure(tenure);
				scPTR.push(p);
				
				counter++;
				break;
			}
			case 3:
			{
				for(int i = 0; i < counter; i++)
				{
					scPTR.front()->print();
					scBFR.push(scPTR.front());
					scPTR.pop();
				}
				for(int i = 0; i < counter; i++)
				{
					scPTR.push(scBFR.front());
					scBFR.pop();
				}
			}
			default:
			{
				if(choice !=4)
				{
					cout<<"Invalid choice!\n";
					system("PAUSE");
				}
				else;
				break;
			}
		}
    		
  	} while(choice != 4);
  	
  	for(int i = 0; i < counter; i++)
  	{
  		scPTR.front()->persist();
  		scPTR.pop();
	}
	outData.close();
	system("PAUSE");
  return 0;
}
