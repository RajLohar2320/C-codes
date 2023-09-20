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

class B : protected A
{
	public:
		void show()
		{
				cout<<a<<endl; 
	        	cout<<b<<endl; 
		}
};

class C : protected B
{
	

	public:
	void show()
	{
		cout<<a<<endl; 
		cout<<b<<endl; 
	} 
//	since members are inaccesible
};

int main()
{
	B bobj;
	bobj.show();
	C cobj;
	cobj.show();
}
