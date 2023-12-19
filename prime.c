#include<stdio.h>
void main()
{
int i,j,a=0,n;
printf("enter a no. to check prime:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
    if(n%i==0)
    {
        a++;
    }
}
if(a>1)
{
    printf("not a prime....");
}
else
{
    printf("its a prime no.....");
}
}