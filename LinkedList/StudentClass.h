#ifndef StudentClass
#define StudentClass
class Student 
{
	private :
		int ID;
		double GPA;
		const char* Name;
	public:
		Student()
		{
		}
		Student(int id , const char* name,double gpa)
		{
			Name=name;
			ID=id;
			GPA=gpa;
		}
		const char* getName()
		{
			return Name;
		}
		int getID()
		{
			return ID;	
		}
		double getGPA()
		{
			return GPA;
		}
		void setName(const char* name)
		{
			Name = name;
		}
		void setGPA(double gpa)
		{
			GPA = gpa;
		}
		void setID (int id)
		{
			ID=id;
		}	
};

#endif // C1_H_INCLUDED
