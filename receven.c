#include<stdio.h>
int sum(int a)
{
    if(a<1)
    {
        return 1;
    }
    else
    {
        if(a%2==0)
        {
            
            sum(a-1);
            printf("%d\n",a);
        }
        else
        {
            sum(a-1);
           //printf("%d\n",a);
        }
    }
}
void main()
{
    sum(20);
}