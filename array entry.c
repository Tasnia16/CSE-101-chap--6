#include<stdio.h>
int main(void)
{
   int a[10],i,*p;
   for(i=0;i<10;i++)
   {
       a[i]=i+1;
   }
   p=&a;
   for(i=0;i<10;i++)
   {
       printf("%d\n",*(p+i));
   }
}

