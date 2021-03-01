#include<stdio.h>
#include<string.h>
int main(void)
{
    char *p[][2]={"red delicious","red",
                  "golden delicious","yellow",
                  "winesap","red",
                  "gala","orange",
                  "lodi","green",
                  "motsu","yellow",
                  "",""};
      int i;
      char a[80];
      printf("enter the name of apple:\n");
      gets(a);
      for(i=0;p[i][0];i++)
      {
          if(!strcmp(a,p[i][0]))
            printf("%s is %s\n",a,p[i][1]);
      }
}
