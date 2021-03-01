#include<stdio.h>
int f(char *p),i;
int main(void)
{
    char a[100];
    gets(a);
    i=f(a);
    printf("%d",i);
}
int f(char *p)
{
  int space=0;
  while(*p)
  {
      if(*p==' ')
        space++;
      p++;
  }
  return space;
}
