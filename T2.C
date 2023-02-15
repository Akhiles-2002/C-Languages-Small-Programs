/*
ii- if  else
->To check condition
->If condition is true then if block executes.
->If condition false then else block execute
syntax:
if(condition)
{
 statement1;
}
else
{
 st2;
}

wap in c which test number is greater or not
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n\n\n\nEnter value of a ");
scanf("%d",&a);
printf("Enter value of b ");
scanf("%d",&b);
if(a>b)
{
 printf("A is greater than B");
}
else
{
printf("B is greater than A");
}


getch();

}

