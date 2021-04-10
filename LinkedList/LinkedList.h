#ifndef LinkedList
#define LinkedList
#include "/Users/dell/Desktop/New folder/StudentClass.h"
struct ListElement
{
	Student student ; 
	ListElement* next;
};
Student EmptyStudent = Student(0," ",0);
class List
{
	private : 
		ListElement* first;
		int size;
	public:
		List()
		{
			first  = NULL;
			size=0;
		}
		void addStudent(int id,const char* name, double gpa)
		{
			ListElement* newrecord=new ListElement;
			newrecord->student.setID(id);
			newrecord->student.setName(name);
			newrecord->student.setGPA(gpa);
			if(first == NULL)
			{
				newrecord->next=first;
				first=newrecord;
			}
			else
			{
				ListElement* current = new ListElement;
				ListElement* prev = new ListElement;
				current=first;
				prev=first;
				while(current!=NULL)
				{
					prev=current;
					current=current->next;
				}
				newrecord->next=prev->next;
				prev->next=newrecord;
			}
			size++;
		}
		Student GetWithID (int id)
		{
			ListElement* check=new ListElement;
			check = first;
			while(check != NULL)
			{
				if(check->student.getID()==id)
				{
					return check->student;
					
				}
				check=check->next;
			}
			return EmptyStudent ;
		}
		Student* GetAllStudents(Student* students)
		{
			
			ListElement* check=new ListElement;
			check=first;
			int i =0;
			while(check != NULL)
			{
				students[i]=check->student; 
				check = check->next;
				i++;
			}
			return students;	
		}	
		int GetSize()
		{
			return size;
		}
		Student FindLargestGPA()
		{
			ListElement* check = new ListElement;
			check=first;
			Student Largest;
			if(check != NULL) 	Largest = check->student;
			while(check!= NULL && check->next != NULL)
			{
				if(Largest.getGPA()<check->next->student.getGPA())
				{
					Largest = check->next->student;
				}
				check=check->next;
			}
			return Largest;
		}
		int DeleteWithID(int ID)
		{
			ListElement* check=new ListElement;
			ListElement* Deleter = new ListElement;
			check=first;
			Deleter = first;
			if(check == NULL) return -1;
			if(ID==check->student.getID())
			{
				first = check->next;
				delete check;
				size--;
				return 2;
			}
			while(check != NULL)
			{	
				if(check->student.getID()==ID)
				{
					break;
				}
				Deleter = check;
				check = check->next;
			}
			if(check != NULL)
			{
				Deleter->next = check->next;
				delete check;
				size--;
				return  1;
			}
			return 0;
		}
};

#endif // C1_H_INCLUDED
