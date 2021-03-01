#include<stdio.h>
int main(void)
{
    int a[10]={2,5,8,9,30,10,21,4,6,31},*p;
    p=a;//p=&a same
    printf("%d %d %d\n",*p,*(p+1),*(p+2));

}
