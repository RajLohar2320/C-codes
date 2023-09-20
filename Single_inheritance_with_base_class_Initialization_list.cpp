#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	A()
	{
		cout<<"In default of A"<<endl;
		
	}
	A(int a)
	{
		cout<<"In para of A"<<endl;
		this->a=a;
	}
	void display()
	{
		cout<<"In display of A"<<endl;
		cout<<"Value of a : "<<a<<endl;
	}
};

class B:public A
{
	int b;
	public:
	B()
	{
		cout<<"In default of B"<<endl;
	}
	B(int a, int b) : A(a)
	{
		cout<<"In para of B"<<endl;
		this->b=b;
	}
//	void display()
//	{
//		cout<<"In display of B"<<endl;
//		cout<<"Value of b : "<<b<<endl;
//	}
};
int main()
{
	B bobj(13, 89);
	bobj.display();
}
