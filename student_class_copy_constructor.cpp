#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	char name[20];
	double fee;
	public:
     	void show();
	    student(int,char[],double);
    	student(student &);

};
void student::show()
{
		cout<<"Name is: "<<name<<"\nRoll no is : "<<rno<<"\nFees is: "<<fee<<endl;
}
student::student(int r,char n[],double f)
{
	rno=r;
    strcpy(name,n);
	fee=f;
}
student::student(student &new_s)
{
	rno=new_s.rno;
	strcpy(name,new_s.name);
	fee=new_s.fee;
}

int main()
{
	student s1(20,"abc",10000);
	s1.show();
	student s2(s1);
	s2.show();
}
