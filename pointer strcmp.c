#include<stdio.h>
char mystrcmp(char *p,char *q);
int main(void)
{
    char a[100],b[100];
    gets(a);
    gets(b);
    mystrcmp(a,b);
}
char mystrcmp(char *p,char *q)
{
    int i=0;
    while(*p && *q)
    {
        if(*p!=*q)
        {
            i=1;
            break;
        }
        else
        {
            *p++;
            *q++;
        }

    }
    if(i==1)
        printf("We are not same bro");
    else
        printf("We are same bro");
}
