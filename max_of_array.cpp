#include<iostream>
using namespace std;
int main(){
	int i,max;
	int arr[5]={1,2,3,4,5};
	
	max=arr[0];
	for(i=1;i<=4;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout << "Max : "<< max;
}
