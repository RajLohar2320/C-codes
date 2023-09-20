#include<iostream>
using namespace std;
int main()
{
	
	int n,i;
	cout<<"Enter array size: "<<endl;
	cin>>n;
	int* p=new int[n];
	cout << "Enter Elements of Array :";
	for(i=0; i<n; i++)
	{
		cin >> p[i];
	}
	for(i=0;i<n;i++)
	{
		cout<< p[i] << " ";
	}
	
	delete []p;
	p = NULL;
	int arr[5] = {5,7,9,0,44};
	p = arr;
	cout << "Second Array : ";
	for(i=0; i<n; i++)
	{
		cout<< p[i] << " ";
	}
	
	
}
