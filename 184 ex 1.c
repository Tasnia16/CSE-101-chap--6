#include<stdio.h>
#include<string.h>
int main()
{
    char *p="stop";//er mane char *p; p="stop;
    char a[100];
    while(strcmp(a,p))
    {
        printf("enter a string:\n");
        gets(a);

    }
}
