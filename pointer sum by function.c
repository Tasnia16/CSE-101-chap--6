#include<stdio.h>
int sum(int *p,int *q);
int main(void)
{
    int a=9,b=4,c;
    c=sum(&a,&b);
    printf("%d is sum",c);
}
int sum(int *p,int *q)
{
    return (*p+*q);
}
