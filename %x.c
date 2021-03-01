#include<stdio.h>
int main(void)
{
    int *p,q;
    p=&q;
    q=10;
    printf("%p\n",p);//hexadecimal of address in 8 bits
     printf("%X\n",p);// exact hexadecimal in capital
     printf("%x",p);//exact hexadecimal in small letter

}
