#include<stdio.h>
void main()
{
    int i;
    char str[5][18];
    printf("enter name of 5 friends:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",str[i]);
    }
    printf("friends name:");
    for(i=0;i<5;i++)
    {
        printf("%s\t",str[i]);
    }
}