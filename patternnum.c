#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=8;i>=1;i--)
    {
        if(i%2!=0)
        {
            for(j=i;j>=1;j--)
            {
                printf("%d",j);
            }
        }

        else
        {
            for(k=1;k<=i;k++)
            {
                printf("%d",k);
            }
        }
        printf("\n");
    }
}