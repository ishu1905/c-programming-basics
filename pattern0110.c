#include<stdio.h>
void main()
{
    int i,j,a=1,b=10;
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            for(j=5;j>=i;j--)
            {
                printf("0%d",a);
            }
        }
        else
        {
            for(j=5;j>=i;j--)
            {
                printf("%d",b);
            }
        }
        
        printf("\n");
    }
}