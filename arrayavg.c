#include<stdio.h>
void main()
{
    int i,a[5];
    float b=0;
    printf("enter array statement:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("average of all elements:");
    for(i=0;i<5;i++)
    {
        b+=a[i];
    }
    printf("%d",(b/5));
}