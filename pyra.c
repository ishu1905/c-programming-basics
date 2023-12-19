#include<stdio.h>
void main()
{
    int i,j,k,a=7,l,b=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=a;k>0;k--)
        {
            printf(" ");
        }
        if(i<5)
        {
        for(l=1;l<=i;l++)
        {
            printf("*");
        }
        }
        else
        {
            for(l=1;l<i;l++)
            printf("*");
        }
        a=a-2;
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=b;k>=1;k--)
        {
            printf(" ");
        }
        for(l=1;l<=i;l++)
        {
            printf("*");
        }
        b+=2;
        printf("\n");
    }
}