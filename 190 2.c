#include<stdio.h>
int main(void)
{
    char s[80],*p,**mp,***mmp;
    p=s;
    mp=&p;
    mmp=&mp;
    printf("enter:\n");
    gets(**mmp);
    printf(**mmp);
}

