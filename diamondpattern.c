#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=i;k<=5;k++)
        {
            printf("*");
        }
        for(int a=i;a<5;a++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=4;j>i;j--)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        for(int a=1;a<=i;a++)
        {
            printf("*");
        }
        printf("\n");
    }
}