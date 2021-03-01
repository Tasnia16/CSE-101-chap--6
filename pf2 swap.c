#include<stdio.h>
int swap(int *p,int *q);
int main(void)
{
    int x,y,*p,*q;
    x=90;
    y=80;
    p=&x;q=&y;
    printf("before swapping :%d %d\n",x,y);
    swap(x,y);

printf("after swapping: %d %d",x,y);
}
int swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}

