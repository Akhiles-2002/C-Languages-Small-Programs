/*
wap in c which print factorial by do while
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,f=1;
 clrscr();
 printf(" \n Enter any number  ");
 scanf("%d",&n);
 do
 {
   f=f*n;
   n--;
 }
 while(n>0);
 printf("\n factroial  : %d",f);

 getch();
}