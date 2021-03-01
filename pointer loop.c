#include<stdio.h>
int main(void)
{
   int i,*p;
   p=&i;
   for(i=1;i<11;i++)
   {
       printf("%d\n",*p);
   }
}
