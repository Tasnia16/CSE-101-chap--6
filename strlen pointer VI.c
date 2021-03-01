#include<stdio.h>
int mystrlen(char *p);
int main(void)
{
    int i;
    char a[100];
    scanf("%s",a);
    i=mystrlen(a);
         printf("%d is the length",i);
}
int mystrlen(char *p)
{
    int t=0,j;
    while(*p)
    {
        t++;
        p++;
    }
    //*p='\0';
    return t;

}

