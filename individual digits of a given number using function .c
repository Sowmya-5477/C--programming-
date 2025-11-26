#include<stdio.h>
#include<conio.h>
void main()
{
void digit();
digit();
printf("\nEnd of the program");
}
void digit()
{
 int r,n;
 printf("Enter n value:\n");
 scanf("%d",&n);
 while(n>0)
 {
   r=n%10;
   printf("%d\n",r);
   n=n/10;
 }
}   