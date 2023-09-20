#include<iostream>
using namespace std;

class A
{
	int c;
	protected:
		int a;
	public:
	   	int b;
	public:
	void display()
	{
		cout<<"In display of A"<<endl;
    }   		
};

class B : public A
{
	public:
		void show()
		{
			cout<<a<<endl; 
			cout<<b<<endl; 
		}
};

class C : public B
{
	

	public:
	void show()
	{
		cout<<a<<endl; 
		cout<<b<<endl;  
	} 
};

int main()
{
	B bobj;
	bobj.show();
	C cobj;
	cobj.show();
}
