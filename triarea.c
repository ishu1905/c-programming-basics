#include<stdio.h>
void main()
{
    int h,b;
    float ar;
    printf("enter height and base of triangle respectively");
    scanf("%d%d",&h,&b);
    ar=h*b/2;
    printf("area of triangle=%f",ar);
}