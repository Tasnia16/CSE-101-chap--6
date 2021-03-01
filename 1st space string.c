#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[80];
    int i,j,p=0;
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]==' ')
        {
            for(j=i+1;a[j];j++)
            {
                printf("%c",a[j]);
            }
            p=1;
        }
        if(p==1)
            break;
    }
}
