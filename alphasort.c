#include<stdio.h>
void main()
{
    char a[20]={"universal"};
    int i,j;
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",a[j]);
        }
        printf("\n");
    }
}