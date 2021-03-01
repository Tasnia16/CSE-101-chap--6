#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[80];
    int i=0;
    printf("Enter a string:");
    gets(str);
    while(str[i])
    {
        str[i]=toupper(str[i]);
        i++;
    }
    printf("%s",str);
}

