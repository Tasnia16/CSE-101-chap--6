#include<stdio.h>
int main(void)
{
    int *p,q;
    p=&q;
    q=1;
    printf("%p\n",p);//hexadecimal of address
    // printf("%d",p);
     (*p)++;
     printf("%d  %p",q,p);

}

