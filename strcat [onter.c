#include<stdio.h>
#include<string.h>
void mystrcat(char *to,char *from);
int main(void)
{
    char a[90];
   // strcpy(a,"I am a good girl. ");
   gets(a);
    mystrcat(a,"I am a student.");
    printf(a);
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

