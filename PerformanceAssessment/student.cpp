#include "student.h"
//Allows the use of Student methods

#include <iostream>
//USE COUT and CIN

#include <string>
#include <cstring>

using namespace std;

Student::Student() {} 

//Constructor
Student::Student(
	string studentID, 
	string fName,
	string lName,
	string emailAddr,
	int age,
	int daysInCourse1,
	int daysInCourse2,
	int daysInCourse3,
	DegreeProgram degree)
{
	setStudentID(studentID);
	setFirstName(fName);
	setLastName(lName);
	setEmail(emailAddr);
	setAge(age);
	setNumDays(daysInCourse1, daysInCourse2, daysInCourse3),
	setDegreeProgram(degree);
}
//Overload Constructor

//------------------------------------------------------------------------------------------

//Function Print
void Student::print()
{
	cout << studentID << endl; //Student ID
	cout << "First Name: " << FirstName << endl; //Student First Name
	cout << "Last Name: " << LastName << endl; //Student Last Name
	cout << "EmailAddress: " << EmailAddress << endl; //Student Email
	cout << "Age: " << Age << endl; //Student Age
	cout << "daysInCourse: " << numDays[0] << ", " << numDays[1] << ", " << numDays[2] << endl; // displays days in course display 3 days
	cout << "Degree Program: " << degree << endl; //Student Degree
	cout << endl; //Space between students.
}
//End Student::print

//-------------------Accessors and Mutators--------------------------

//Student ID Mutator and Accessor 
void Student::setStudentID(string studentID)
{
	studentID = studentID;
}
//End Student::setStudentID
string Student::getStudentID()
{
	return studentID;
}
//End Student::getStudentID

//Student FirstName Mutator and Accessor
void Student::setFirstName(string fName)
{
	firstName = fName;
}
//End Student::setFirstName
string Student::getFirstName()
{
	return firstName;
}
//End Student::getFirstName

//Student LastName Mutator and Accessor
void Student::setLastName(string lName)
{
	lastName = lName;
}
//End Student::setLastName
string Student::getLastName()
{
	return lastName;
}
//End Student::getLastName

//Student emailAdd Mutator and Accessor
void Student::setEmail(string emailAddr)
{
	emailAddress = emailAddr;
}
//End Student::setEmail
string Student::getEmail()
{
	return emailAddress;
}
//End Student::getEmail

//Student age Mutator and Accessor
void Student::setAge(int studentAge)
{
	age = studentAge;
}
//End Student::setAge
int Student::getAge()
{
	return age;
}
//End Student::getAge

//Student age Mutator and Accessor
void Student::setNumDays(int daysInCourse1, int daysInCourse2, int
	daysInCourse3)
{
	numDays[0] = daysInCourse1;
	numDays[1] = daysInCourse2;
	numDays[2] = daysInCourse3;
}
//End Student::setNumDays
int* Student::getNumDays()
{
	return numDays;
}
