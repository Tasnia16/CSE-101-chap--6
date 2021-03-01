#include<stdio.h>
#include<string.h>
void mystrcpy(char *to,char *from);
int main(void)
{
    char str[80];
    mystrcpy(str,"this is a string");
    printf(str);
}
void mystrcpy(char *to,char *from)
{
    while(*from)
    {
       *to++=*from++;
       *to='\0';
    }

}
