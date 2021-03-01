#include<stdio.h>
int main(void)
{
    char a[100],*p;
    gets(a);
    p=a;
    while (*p && *p!=' ')
    {
        p++;
    }
     printf(p);


}
