#include<stdio.h>
void myputs(char *p);
int main(void)
{
  myputs("This is a test");
}
void myputs(char *p)
{
    while(*p)
    {
        printf("%c",*p);
        p++;
    }
}
