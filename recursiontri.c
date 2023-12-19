#include <stdio.h>
int printpattern(int n) 
{
   if(n>0)
    {
      printpattern(n-1);
      printf("*");
    }
}
int pattern(int n) 
{
   if(n>0) 
   {
      pattern(n-1);
   }
   printpattern(n); 
   printf("\n");
}
void main()
{
   int n;
   printf("enter no. of rows to print right angle triangle : ");
   scanf("%d",&n);
   pattern(n);
}