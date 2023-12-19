#include<stdio.h>
void main()
{
    int i,j,a[3][3],b=0,c=0,d=0,e=0;
    printf("enter matrix element : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("addition of all except center : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0)
            {
                b+=a[i][j];
            }
            if(i==2)
            {
                c+=a[i][j];
            }
            if(j==0)
            {
                d+=a[j][i];
            }
            if(j==2)
            {
                e+=a[j][i];
            }
            else
            {
                continue;
            }
        }
    }
        int f=b+c+d+e;
        printf("%d",f);
}