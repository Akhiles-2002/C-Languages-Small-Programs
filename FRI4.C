/*
factorial by for loop :

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,f=1;
 clrscr();
 printf("\n Enter any number  \n");
 scanf("%d",&n);  //5
 for(a=n;a>=1;a--)
 {
   f=f*a;      //  1=1*5   5=5*4
 }
   printf("\n factorial  : %d",f);
 getch();
}