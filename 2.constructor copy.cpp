#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		string name;
		float marks;
	public:
		student()  //default constructor
		{
			rollno=1;
			name="pooja";
			marks=89.50;
		}
		student(int r,string n,float m)  //parametrized constructor
		{
			rollno=r;
			name=n;
			marks=m;
		}
		
		student (student &obj)
		{
			rollno=obj.rollno;
			name=obj.name;
			marks=obj.marks;
		}
		void display()
		{
			cout<<"\n rollno= "<<rollno;
			cout<<"\n name= "<<name;
			cout<<"\n marks= "<<marks;
		}
};
main()
{
	student s1;//default constructor calling
	s1.display();
	student s2(2,"Rahul",85);//parametrized constructor calling
	s2.display();
	student s3(s2);// copy constructor calling
	s3.display();
	
	
}
