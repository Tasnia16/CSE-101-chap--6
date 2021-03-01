#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[80],*p;
    printf("Enter a string:");
    gets(str);
    p=str;
    while(*p)
    {
        *p=toupper(*p);
         p++;
    }
    printf("%s",str);
}


