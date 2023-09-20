#include<stdio.h>
void U_strcat(char *, char *);
int main()
{
    char a[20];
    char b[20];
    printf("\nEnter 1st String : ");
    gets(a);
    printf("\nEnter 2nd String : ");
    gets(b);
    U_strcat(b, a);
    printf("\n 1st String : %s", a);
    printf("\n 2nd String : %s", b);
    return 0;
}
void U_strcat(char *q, char *p)
{
    while(*q != '\0')
    {
        q++;
    }
    while(*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
}