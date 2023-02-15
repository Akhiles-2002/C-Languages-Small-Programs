/*
wap in which print reverse of any number(while)

*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rem=0,rev=0;
 clrscr();
 printf("Enter any number  ");
 scanf("%d",&n);
 while(n>0)
 {
   rem=n%10;//435
   rev=(rev*10)+rem  ;    // 0=0+5  5=5*10+3 53=53*10+4  534
   n=n/10;  //  56
 }
  printf("\n  rev  =%d",rev);
 getch();
}