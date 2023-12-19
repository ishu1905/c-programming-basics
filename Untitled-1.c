#include<stdio.h>
int fact(int);
int fact(int f)
{
    int i,sum=0;
    for(i=1;i<=f;i++)
    {
        sum+=i;
    }
    return f();
}
void main()
{
    int x,y;
    printf("enter a no. to find factorial:");
    scanf("%x",&x);
    y=fact(x);
    printf("factorial of given no : %d",y);
}