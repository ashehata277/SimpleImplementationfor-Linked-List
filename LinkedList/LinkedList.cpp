#include <iostream>
#include"/Users/dell/Desktop/New folder/LinkedList.h"
#include"/Users/dell/Desktop/New folder/StudentClass.h"
#define initalsize 10
using namespace std;
int main()
{
	List list = List();
	//-----------------------------------------add some Students in our linkedlist ---------------------------------
	list.addStudent(1,"Arwa", 1.7);
	list.addStudent(2, "Mohamed", 2.5);
	list.addStudent(3, "Mohamed", 2.5);
	list.addStudent(4, "arwa", 1.0);
	list.addStudent(5, "Mohamed", 3.5);
	list.addStudent(6, "Mohamed", 3.9);
	list.addStudent(7, "Mohamed", 3.9);
	list.addStudent(8, "Mohamed", 3.9);
	//---------------------------------------------declare array of students and pass it to all students method ------------------------------------------
	Student  students[initalsize];
	Student* Students = list.GetAllStudents(students);                        //We Can't Return Pointer to Arrays Declared in Function because it will be local variable and it release after function ended
	//----------------------------print All Elements in the List ---------------------------------------------------
	int size = list.GetSize();
	for (int i = 0;i <size ;i++)
	{
		cout << Students[i].getID() << "**********" << Students[i].getName() << "****************" << Students[i].getGPA() << endl;
	}
	//-------------------------------Print Largest GPA ------------------------------------------------------
	Student Largest = list.FindLargestGPA();
	cout << "Largest GPA " << Largest.getID() << "******************" << Largest.getName() << "*******************" << Largest.getGPA();
	//----------------------------Delete two Element -------------------------------------------------------
	cout << endl << list.DeleteWithID(7) << endl;
	cout << endl << list.DeleteWithID(1) << endl;
	//----------------------------print all elements in list after the two elements are Deleted ---------------------------------------------------------------------
	Students = list.GetAllStudents(students);
	size = list.GetSize();
	for (int i = 0;i < size;i++)
	{
		cout << Students[i].getID() << "**********" << Students[i].getName() << "****************" << Students[i].getGPA() << endl;
	}
	return 0;
}


