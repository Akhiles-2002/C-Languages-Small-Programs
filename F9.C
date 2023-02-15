/*
3- with argument and with return
(input,output in main()'s body but process in function definition/body
sum of two number
*/
#include<stdio.h>
#include<conio.h>
int sum(int x,int y) ;
void main()
{
int a=10,b=2,c;
clrscr();
c=sum(a,b);
printf("\n sum : %d",c);
getch();
}
int sum(int x,int y)
{
 int z;
 z=x+y;
 return(z);
}
