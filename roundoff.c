#include<stdio.h>
void main()
{
    float n;
    printf("enter product value : ");
    scanf("%f",&n);
    int a=n;
    float b=a+0.5;
    
    if(n>b)
      {
        printf("%d",a+1);
      }
      else
      {
        printf("%d",a);
      }
    
}