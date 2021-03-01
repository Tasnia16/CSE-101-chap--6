#include<stdio.h>
int swap(int *p,int *q);
int main(void)
{
    int x,y;
    x=90;
    y=80;
    printf("before swapping :%d %d\n",x,y);
    swap(&x,&y);//function calling e always variable pr array er address pass korate hoy

printf("after swapping: %d %d",x,y);
}
int swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
