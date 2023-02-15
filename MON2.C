/*
wap in which print reverse of any number(while)

*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rem=0;
 clrscr();
 printf("Enter any number  ");
 scanf("%d",&n);
 while(n>0)
 {
   rem=n%10;//567
   printf("%d",rem);
   n=n/10;  //  56
 }

 getch();
}