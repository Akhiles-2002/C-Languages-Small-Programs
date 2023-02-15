/*
check number is pallindrom or not

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem=0,rev=0,s=0;
clrscr();
printf("Enter any number ");
scanf("%d",&n);
s=n; //n save to s
while(n>0)
{
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
}
if(s==rev)
{
 printf("Pallindrome  ");
}
else
{
 printf("Not pallindrom");
}
getch();
}