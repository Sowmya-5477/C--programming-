#include<stdio.h>
#include<conio.h>
void main()
{
void sum();
sum();
printf("\nEnd of the program");
}
void sum()
{
 int i,sum=0,n;
 printf("Enter n value:\n");
 scanf("%d",&n);
 printf("sum of n natural numbers:");
 for(i=1;i<=n;i++)
 {
  sum=sum+i;
 } 
 printf("%d",sum);
}   