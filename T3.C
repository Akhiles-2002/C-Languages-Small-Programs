/*
wap in c which check number is even or odd
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("\n\n\nEnter any number  ");
 scanf("%d",&n); //8
 if(n%2==0)  //8%2 0==0
 {
 printf("This is EVEN number ");
 }
 else
 {
 printf("This is ODD number ");
 }
 getch();
}