#include<stdio.h>
void main()
{
    char a[]={"hello world"};
    int c=sizeof(a);
    char b[c];
    int i,j;
    for(j=0;j<c-1;j++)
        {
            b[j]=a[j];
        }
    for(i=0;i<j;i++)
    {
        printf("'%c'",b[i]);
    }
}