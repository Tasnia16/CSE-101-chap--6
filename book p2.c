#include<stdio.h>
int main(void)
{
    int *p,q,t;

    t=123;
    p=&t;
    printf("%d\n",p);
    q=*p;
    printf("%d",q);

}

