#include<stdio.h>
#include<conio.h>
void main()
{
void count();
count();
printf("\nEnd of the program");
}
void count()
{
 int i=1,count=0,num;
 printf("Enter n value:\n");
 scanf("%d",&num);
 while(i<=num)
 {
  if (num%i==0)
  count=count+1;
  i=i+1;
 }
 if(count==2) 
  printf("prime number");
 else
  printf("not prime number");
 } 