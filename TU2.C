/*
20/04/2021
looping  :
1- while
program-1 to 10
   -> 1 to 100
   ->print name multiple times
Q-
WAP IN C WHICH PRINT TABLE OF ANY NUMBER
N=5
5 10 15...50
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=1,t=0;
 clrscr();
 printf("\n\n");
 printf("\n Enter any number ");
 scanf("%d",&n);
 while(a<=10)
 {
 t=a*n;
   printf(" %d\n",t);
   a++;
 }
 getch();
}