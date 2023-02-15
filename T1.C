/*
13/04/2021
------------------
chapter 2:
control structure  :
control structure are just a way to specify flow of control in program.
1- conditional programming
2- branching
3- looping
1- conditional programming
if : It is used to conditional programming.
 types of if
 i- if
 ii- if else
 iii- else if ladder
 iv- nested if
----------------------
i- if
->To check condition
->If condition is true then if block executes.
->If condition false statement ignore
syntax:
if(condition)
{
 statement;
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



getch();

}

