#include<stdio.h>
void main()
{
    int i,a[5],b,j,k=0;
    printf("enter array element:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter your targate : ");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
         if(k==b)
        {
            break;
        }
        for(j=0;j<5;j++)
        {
            k=a[i]+a[j];
            if(k==b)
            {
                
                printf("index of two nos :%d\t%d",i+1,j+1);
                break;
            }
            else
            {
                continue;
            }
        }
       
    }
    
    if(k!=b)
    {
        printf("not matched.......");
    }
    
} 