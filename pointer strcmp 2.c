#include<stdio.h>
int mystrcmp(char *p,char *q);
int main(void)
{
    int t;
    char a[100],b[100];
    gets(a);
    gets(b);
    t=mystrcmp(a,b);
    if(t==1)
         printf("We are not same bro");
    else
        printf("We are same bro");
}
int mystrcmp(char *p,char *q)
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
            p++;
            q++;
        }
    }
    return(i);

}

