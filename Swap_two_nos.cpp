#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two values ";
	cin>>a>>b;
	cout<<"before swap a and b "<<a<<" "<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap a and b "<<a<<" "<<b<<endl;
	return 0;
}


