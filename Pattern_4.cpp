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
	int count = 1;
	for(int i=1; i<=temp; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << count << " " ;
			count++;
		}
		cout << endl;
	}
}
