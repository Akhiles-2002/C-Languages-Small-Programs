/*
4- no argument but return
(output in main()'s body but input, process in function definition/body
sum of two number
*/
#include<stdio.h>
#include<conio.h>
int sum() ;
void main()
{
int c;
clrscr();
c=sum();
printf("\n sum : %d",c);
getch();
}
int sum()
{
 int x=10,y=10,z;
 z=x+y;
 return(z);
}
