#include<stdio.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("a=%d\nb=%d",*a,*b);
}
void main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("\na=%d\nb=%d",a,b);
}