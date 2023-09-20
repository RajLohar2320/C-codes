#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n_char, n_marks, sum=0;
	printf("\nEnter no. of char in name : ");
	scanf("%d",&n_char);
	char *name = (char *)malloc((n_char+1)*sizeof(char));
	scanf("%s", name);
	printf("\nEnter no. of Subjects : ");
	scanf("%d", &n_marks);
	int *marks = (int *)malloc(n_marks*sizeof(int));
	for(int i=1; i<=n_marks; i++)
	{
		scanf("%d",&marks[i]);
		sum = sum + marks[i];
	}
	float avg = (float)(sum/n_marks);
	printf("Name : %s \t Avg : %f", name, avg);
	return 0;
}
