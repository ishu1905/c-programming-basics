#include<stdio.h>
void main()
{
    int p,r,t;
    float si;
    printf("enter principal");
    scanf("%d",&p);
    printf("enter rate");
    scanf("%d",&r);    
    printf("enter time");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("S.I.=%f",si);
}