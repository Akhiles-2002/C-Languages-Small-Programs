//reverse by for
#include<stdio.h>
/*
reverse by for

*/
#include<conio.h>
void main()
{
int n,rem=0,rev=0;
clrscr();
printf("\n\n\nEnter any number ");
scanf("%d",&n);
for(;n>0;)
{
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
}
printf("\n Rev = %d\n",rev);
	   getch();
	   }