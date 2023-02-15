/*
control structure
1- if- if ,if else,ladder else if,nested
2- branching- switch
3- looping/iteration/repitition (v.imp.)
  In programming , a loop is used to repeat a block of code until the
  specified condition is met.
 i- while loop :
 ->In this loop first of all test condition, if condition is true
 then while block executes otherwise ignore while  block.
 syntax:
 while(condition)
 {
  statement
 }
 or
 initialization;
 while(condition)
 {
  statement;

 }
 print "C language" 10 times.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a=11;   //initialization
clrscr();
while(a<=10)  //false condition
{
printf("C Language \n");
a++;
}
printf("\n Thanks!!!!");
getch();
}
