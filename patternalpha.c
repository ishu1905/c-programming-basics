#include<stdio.h>
void main()
{
    int i,j,k,l,a=0,d=0;
    char b,c;
    for(i=0;i<=5;i++)
    {
        b='A';
        c='e';
        c-=d;
        for(j=5;j>i;j--)
        {
            printf("%c",b);
            b++;
        }
        for(k=a;k>0;k--)
        {
            printf(" ");
        }
        for(l=5;l>i;l--)
        {
            printf("%c",c);
            c--;
        }
        d++;
        a+=2;
        printf("\n");
    }
}