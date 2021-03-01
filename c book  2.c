#include<stdio.h>
int main(void)
{
    int *p;
    double q,t;
    t=123.23;
    p=&t;
    printf("%d\n",p);
    printf("%d",*p);
}

