#include<iostream>
using namespace std;
void pat(int);
int main()
{
	int n;
	cout << "Enter N : ";
	cin >> n;
	pat(n);
	return 0;
}
void pat(int temp)
   
{	
    char ch='A'; 
	for(int i=1; i<=temp; i++)
	{
		for(int j=temp; j>=i; j--)
		{
			cout << ch;
		}
		ch++;
		 
		cout << endl;
	}
}
