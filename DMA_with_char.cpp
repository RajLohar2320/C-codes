#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int n,i;
	char* ptr;
	printf("Enter no. of characters : ");
	scanf("%d",&n);
	printf("Length of string is :",n);
	ptr=(char*)malloc(n*sizeof(char)+1);
	printf("Accept string:");
	scanf("%s",ptr);
	printf("Display string: ");
	scanf("%s",ptr);
	free(ptr);
	
}
