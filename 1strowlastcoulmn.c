#include<stdio.h>
void main()
{
    int i,j,a[3][3],b=0,c=0;
    printf("enter matrix element : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("addition of 1st row and last column : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0)
            {
                b+=a[i][j];
            }
            //else
            //{
                if(j==2)
                {
                    c+=a[i][j];
                }
                else
                {
                    continue;
                }
            //}
        }
    }
    printf("%d",b+c);
}