#include<stdio.h>
int main(void)
{
    char s[80],*p,**mp;
    p=s;
    mp=&p;
    printf("enter:\n");
    gets(s);//gets(*mp) same
    printf(*mp);
}

