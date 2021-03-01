#include<stdio.h>
#include<string.h>
int main(void)
{
    char *a[]={"yes","no","may be-rephrase the question"};
    char b[500];
        printf("enter a string:\n");
        gets(b);
         printf(a[strlen(b)%3]);
    }




