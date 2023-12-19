#include<stdio.h>
void main()
{
    int i,a[5],b[5];
    printf("enter array element for sq:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("square of all elements");
    for(i=0;i<5;i++)
    {
        b[i]=a[i]*a[i];
        printf("%d\t",b[i]);
    }
}