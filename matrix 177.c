#include<stdio.h>
int main()
{
    float balance[5][5]={1,2,3,4,5,6,7,8,9,0,12,32,34,45,67,76,89,98,8,6,5,4,3,2,1};
    float *p;
    p=&balance;
    printf("%f",*(p+4));
}
