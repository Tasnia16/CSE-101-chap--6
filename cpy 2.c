#include<stdio.h>
#include<string.h>
void mystrcpy(char *to,char *from);
int main(void)
{
    char str[80],b[80];
    gets(str);
    mystrcpy(b,str);
    printf(b);
}
void mystrcpy(char *to,char *from)
{
    while(*from)
    {
       *to++=*from++;

    } *to='\0';

}

