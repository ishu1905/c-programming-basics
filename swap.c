#include<stdio.h>
void main()
{
    int a=10,b=20,c=0;
    c=a;
    a=b;
    b=c;
    printf("a= %d\n",a);
    printf("b= %d\n",b);
}