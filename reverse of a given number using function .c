#include<stdio.h>
#include<conio.h>
void main()
{
void rev();
rev();
printf("\nEnd of the program");
}
void rev()
{
 int rev=0,r,n;
 printf("Enter n value:\n");
 scanf("%d",&n);
 while(n!=0)
 {
   r=n%10;
   rev=rev*10+r;
   n=n/10;
 }
 printf("%d",rev);
}   