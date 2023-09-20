#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int n,i;
	char* ptr;
	printf("Enter no. of characters : ");
	scanf("%d",&n);
	ptr=(char*)malloc(n*sizeof(char)+1);
	printf("Accept string:");
	scanf("%s",ptr);
	printf("Length of string is : %d\n",n);
	printf("Display string : %s ",ptr);

	free(ptr);
	
}
