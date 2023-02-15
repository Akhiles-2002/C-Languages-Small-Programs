/*
  wap in c which print sum of any number
    n=567
    sum=18
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,rem,sum=0;
   clrscr();
     printf("\n\n Enter any number \n");
     scanf("%d",&n);
      while(n>0)    //  456
      {
	rem=n%10;  //6
	sum=sum+rem;   // 0=0+6  6=6+5  11=11+4  15
	n=n/10;   // 4

      }
      printf("\n  sum  : %d",sum);
   getch();
}