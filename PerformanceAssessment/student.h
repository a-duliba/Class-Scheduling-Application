#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "degree.h" //Include Header
#include <string>	//Allows the use of Enum

using namespace std; 

//Create Student Class
class Student
{
//Set public methods and variables
public:Student();
	  //Constructor
	  Student
	  (
		  string studentID,
		  string fName,
		  string lName,
		  string emailAddr,
		  int age,
		  int daysInCourse1,
		  int daysInCourse2,
		  int daysInCourse3,
		  DegreeProgram degree
	  );
	  //Overloaded constructor

	  //-----------------------------Functions StudentClass---------------------------------

	  void print();
	  //print Student

	  //Accessors Functions
	  string getStudentID(); 
	  string getFirstName();
}