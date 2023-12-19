#include<stdio.h>
int pattern(int n)
{
    if(n>0)
    {
        printf("*");
    }
    pattern(n-1);
    pattern1(n);
}
int pattern1(int n)
{
    if(n>0)
    {
        pattern1(n-1);
        printf("*");
    } 
    pattern2(n);   
}
int pattern2(int n)
{
    if(n>0)
    {
        pattern2(n-1);
    }
    pattern(n);
    printf("\n");
}
void main()
{
   /* int n;
    printf("enter rows count : ");
    scanf("%d",&n);*/
    pattern2(5);
}