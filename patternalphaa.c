#include<stdio.h>
void main()
{
    int i,j;
    char a='A';
    char b='B';
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            for(j=5;j>=i;j--)
            {
                printf("%c%c",a,b);
            }
        }
        else
        {
            for(j=5;j>=i;j--)
            {
                printf("%c%c",b,a);
            }
        }
        printf("\n");
    }
}