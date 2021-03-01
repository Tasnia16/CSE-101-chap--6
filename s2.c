#include<stdio.h>
int sum(int *p,int *q);
int main(void)
{
    int a=9,b=4,c,*d,*e;
    d=&a;e=&b;
    c=sum(d,e);
    printf("%d is sum",c);
}
int sum(int *p,int *q)
{
    return (*p+*q);
}
