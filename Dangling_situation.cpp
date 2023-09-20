#include<iostream>
#include<string.h>
using namespace std;

class string1
{
	int len;
	char* ptr;
	public:
	   string1(char*);
	   ~string1();
	   void show();
	   
};
string1 :: string1(char* ptr)
{
    this->len=strlen(ptr);
	this->ptr=new char[this->len+1];
	strcpy(this->ptr,ptr);
}
void string1 :: show()
{
	cout<<"Length is : "<<len<<endl;
	cout<<"String is : "<<ptr<<endl;
}
string1 :: ~string1()
{
	cout<<"Destructor is called !"<<endl;
	if(ptr)
	{
		delete []ptr;
		ptr = NULL;
    }
}

int main(){
	string1 s1("Rahul");
	s1.show();
	{
		string1 s2(s1);
		s2.show();
		s2.~string1();	
	}
	s1.show();
}
