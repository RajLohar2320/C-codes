#include<stdio.h>
void U_strcpy(char *, char *);
void U_strrev(char *, char*);
int main()
{
    char str[10];
    char temp[10];
    printf("\n Enter String : ");
    gets(str);
    U_strcpy(temp, str);
    printf("\n Original String : %s", str);
    U_strrev(temp, str);
    printf("\n Reversed String : %s", str);
    return 0;
}
void U_strcpy(char *temp, char *str)
{
    while(*str != '\0')
    {
        *temp = *str;
        temp++;
        str++;
    }
    *temp = '\0';
}
void U_strrev(char *temp, char* str)
{
    while (*temp != '\0')
    {
        temp++;
    }
    temp--;
    while (*str != '\0')
    {
        *str = *temp;
        str++;
        temp--;
    }
}