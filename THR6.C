/*
jump statement
1-break;
2-continue
3-goto
1- break;
->To terminate switch block and loop.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a;    //basic int,float,char,double
clrscr();
for(a=1;a<=10;a++)
{

  if(a==5)
  {
   break;
  }
  printf("%d ",a);
}
getch();
}