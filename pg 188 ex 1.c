#include<stdio.h>
#include<string.h>
int main(void)
{
    char *a[]={"yes","no","may be"};
    char b[500],c[400];
    gets(b);
    if(!strcmp(b,a[2]))
    {
        printf("enter a new string:\n");
        gets(c);
         printf(" string lengt is: %d",strlen(c));
    }


}
