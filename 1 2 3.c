#include<stdio.h>
int main(void)
{
    char *p="one",*q="two",*r="three";
    printf("%s %s %s\n",p,q,r);
    printf("%s %s %s\n",p,r,q);
    printf("%s %s %s",q,p,r);
}
