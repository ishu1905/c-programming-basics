#include<stdio.h>
void main()
{
    int i,a[5],b=0;
    printf("enter values for array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b+=a[i];
    }
    printf("addition of all elements=%d",b);
}