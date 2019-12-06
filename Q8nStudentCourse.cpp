#include<stdio.h>
#include<iostream>
#include<string.h>

class student
{
	char sname[10];
	//int roll_no;

	public:
		student(char *x)
		{
			strcpy(sname,x);
		}
		char* return_student_name()
		{
			return (sname);
		}
};

class course
{
	static int noc;
	char cname[10];
	public:
		course(char *x)
		{
			strcpy(cname,x);
		}
		char* return_course_name()
		{
			return (cname);
		}

		void add_course()
		{
			course(char *x)
			noc++;
			//char* return_course_name()
		}
};
int course ::noc;
class grade
{
	student *s;
	course *c;

	char grade;
	int marks;
	public:
	grade(student *sx,course *cx,int m):s(sx),c(cx)
	{
		marks=m;
	}

	char compute_grade()
	{
		if(marks>90)
		{
			grade='A';
		}
		else
		{
			grade='B';
		}
		return grade;
	}
};

int main()
{
	char n[10];
	int noc;

	course c1("OOPS");
	course c2("DAA");
	course c3("CN");

	student s1("A");
	student s2("B");
	student s3("C");

	cout<<"List of students"<<endl;
	cout<<s1.return_student_name()<<endl;
	cout<<s2.return_student_name()<<endl;
	cout<<s3.return_student_name()<<endl;

	cout<<"List of courses"<<endl;
	cout<<c1.return_course_name()<<endl;
	cout<<c2.return_course_name()<<endl;
	cout<<c3.return_course_name()<<endl;

	course *cp=&c1;
	student *sp=&s1;
	grade g(sp,cp,100);
	cout<<g.compute_grade()<<endl;

	retrun 0;
}




