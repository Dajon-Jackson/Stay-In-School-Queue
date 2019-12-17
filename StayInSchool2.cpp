//StayInSchool2.cpp
#include<iostream>
#include<string>
#include"School.h"
#include"Professor.h"
#include"Faculty.h"
#include"Student.h"
using namespace std;

int main(int argc, char** argv){
	
  School* scPTR[100];
  string fname, lname, id, age, gpa, status, tenure, position;
  int counter = 0;
  int choice;
  do
  {
  system("CLS");
  cout<< "Enter 1 for a student, 2 for a professor, 3 for faculty, and 4 for exit: ";
  cin>>choice;
  
  if(choice == 1)
  {
    Student* s = new Student;
    cout<<"Enter the student's first name, last name, age, ID number, GPA, and status: ";
    cin>>fname>>lname>>age>>id>>gpa>>status;
    s->setName(fname, lname);
    s->setAge(age);
    s->setID(id);
    s->setGPA(gpa);
    s->setStatus(status);
    scPTR[counter] = s;

    counter++;
  }else
    if(choice == 2)
    {
      Professor* p = new Professor;
      cout<<"Enter the professor's first name, last name, age, ID number, and years worked: ";
      cin>>fname>>lname>>age>>id>>tenure;
      p->setName(fname, lname);
      p->setAge(age);
      p->setID(id);
      p->setTenure(tenure);
      scPTR[counter] = p;
      
      counter++;
    }else
      if(choice == 3)
      {
    	Faculty* f = new Faculty;
        cout<<"Enter the faculty member's first name, last name, age, ID number, and position: ";
        cin>>fname>>lname>>age>>id>>position;
        f->setName(fname, lname);
        f->setAge(age);
        f->setID(id);
        f->setPosition(position);
        scPTR[counter] = f;
        
        counter++;
      }else
        if(choice >4 || choice < 1)
        {
          cout<<"Invalid choice!\n";
          system("PAUSE");
        }

  } while(choice != 4);

  //display content pointed by the scPTR
  for(int i = 0; i < counter; i++)
  {
    scPTR[i]->print();
  }

  return 0;

}
