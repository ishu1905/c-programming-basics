#include<stdio.h>
int sum(int a)
{
    if(a<1)
    {
        return 1;
    }
    else
    {
        int ans=a-sum(a-1)+1;
        printf("%d\n",a*5);
    }
}
void main()
{
    sum(10);
}