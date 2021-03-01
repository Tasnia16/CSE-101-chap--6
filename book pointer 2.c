#include<stdio.h>
int main(void)
{
    int *p,t;
    double q;
    t=123;
    p=&t;
    printf("%d\n",p);
    printf("%d",*p);
}
