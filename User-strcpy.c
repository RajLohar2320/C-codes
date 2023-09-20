#include<stdio.h>
void U_strcpy(char *, char *);
int main()
{
    char a[10];
    char b[10];
    printf("\nEnter a String : ");
    gets(a);
    U_strcpy(b, a);
    printf("\n Soucre String : %s", a);
    printf("\n Copy String : %s", b);
    return 0;
}
void U_strcpy(char *q, char *p)
{
    while(*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
}