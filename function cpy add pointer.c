#include<stdio.h>
#include<string.h>
void mystrcpy(char *to,char *from);
void mystrcat(char *to,char *from);
int main(void)
{
    char a[80],b[80],c[80];
    printf("Enter a:\n");
    gets(a);
    mystrcpy(b,a);
    printf("In b:%s\n",b);
    gets(c);
    mystrcat(b,c);
    printf("After adding:%s",b);

}
void mystrcpy(char*to,char*from)
{
    while(*from)
    {
        *to++=*from++;
    } *to='\0';

}
void mystrcat(char *to,char *from)
{
    while(*to)
    {
        to++;
    }
    while(*from)
    {
        *to++=*from++;
    }*to='\0';
}
