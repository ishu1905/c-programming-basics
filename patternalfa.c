#include<stdio.h>
void main()
{
    int i,j;
    char a;
    for(i=1;i<=5;i++)
    {
        a='A';
        for(j=5;j>=i;j--)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}