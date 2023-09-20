#include<iostream>
using namespace std;
int main(){
	int i,max;
	int arr[5]={1,2,3,4,5};
	int arr1[5];
	
	for(i=0;i<5;i++){
		arr1[i]=arr[i];
	}
	cout<<"First Array is: "<<endl;
	for(i=0;i<5;i++){
		cout<<arr[i]<< "  ";
	}
	cout<<"\nCopied array is: "<<endl;
	for(i=0;i<5;i++){
		cout<<arr1[i]<< "  ";
	}
	return 0;
}
