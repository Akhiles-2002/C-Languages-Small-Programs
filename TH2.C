/*
  3- for loop
  ->It is like while loop
  ->But in this loop initialization,condition and increment/decrement
  in same line.
  syntax:
  for(initialization;condition;increment/dec)
  {
    statement;
  }
   print 1 to 10
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
  for(a=1;a<=10;a++)
  {
   printf(" %d\n",a);
  }
 getch();
}