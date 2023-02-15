/*
 3- goto
 ->It is called unconditional statement
 ->It is used to transfer cursor control one place to another.
 syntax:
 label:
 ----
 ----
 goto label;
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x=1;
clrscr();
start:
printf("%d ",x);
x++;
if(x<=10)
{
goto start;
}
getch();

}