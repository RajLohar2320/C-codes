#include<iostream>
using namespace std;

int main(){
	int temp[2][7];
	int i,j;
	for(i=0;i<2;i++){
		cout<<"Enter temp for city " << i+1 <<" :" << endl;
		for(j=0;j<7;j++){
			cout << "Enter "<<j+1<<"th day Temp : ";
			cin>>temp[i][j];	
		}
	}
	for(i=0;i<2;i++){
		cout<<"City "<< i+1 << " :" << endl;
		for(j=0;j<7;j++)
		{
			cout << "Temp of "<<j+1<<"th Day : "<<temp[i][j] << endl;
		}	
	}
	
}
