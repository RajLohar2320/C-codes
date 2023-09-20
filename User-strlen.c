#include<stdio.h>
int U_strlen(char *);
int main()
{
    char a[10];
    printf("\nEnter a String : ");
    gets(a);
    int length = U_strlen(a);
    printf("\nLength of Given String : %d", length);
    return 0;
}
int U_strlen(char *temp)
{
    int len;
    len = 0;
    while(*temp != '\0')
    {
        len++;
        temp++;
    }
    return len;
}