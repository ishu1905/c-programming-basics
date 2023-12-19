#include<stdio.h>
int main()
{
    int sum=0,n,i;
    printf("enter a no. to check perfect no. :");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        else
        {
            continue;
        }
    }
    if(sum==n)
    {
        printf("no. is a perfect no...");
    }
    else
    {
        printf("no. is not a perfect no....");
    }
}