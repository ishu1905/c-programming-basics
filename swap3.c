#include<stdio.h>
void main()
{
    //int a=10,b=20,c=30;
    int a,b,c;
    printf("enter three no. respectively :\n");
    scanf("%d%d%d",&a,&b,&c);

    a=a+b+c;
    c=a-(c+b);
    a=a-(c+b);
    b=a+b+c;
    b=b-(a+c);
    printf("a=%d",a);
    printf("\nb=%d",b);
    printf("\nc=%d",c);
}